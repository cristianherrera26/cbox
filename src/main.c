#include <string.h>
#include <stdio.h>
#include "libbox.h"
#include "cbox.h"

int
main(int argc, char *argv[])
{
	char *progname = basename(argv[0]);
	for (int i = 0; programs[i].progname; i++) {
		if (!strcmp(progname, programs[i].progname)) {
			return programs[i].main(argc - 1, argv + 1);
		}
	}

	return 1;
}
