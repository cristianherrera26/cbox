#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libbox.h"
#include "cbox.h"

int
exec_main(int argc, char *argv[], char *prog_name)
{
	for (int i = 0; programs[i].progname; i++) {
		if (!strcmp(prog_name, programs[i].progname)) {
			exit(programs[i].main(argc - 1, argv + 1));
		}
	}

	return 1;
}

int
main(int argc, char *argv[])
{
	set_progname(argv[0]);
	exec_main(argc, argv, get_progname());
	/* if argv[0] it's correct the next code shouldn't execute */

	if (argc > 1) exec_main(argc - 1, argv + 1, argv[1]);
	/* Then we try with the first argument (we increase and dicrease (argc, argv) to remove the progname for the main function) */

	/* Otherwhise we print the name of the available commands and return with error (bad usage) */
	for (int i = 0; programs[i].progname; i++) {
		fputs(programs[i].progname, stderr);
		fputc('\n', stderr);
	}

	return 1;
}
