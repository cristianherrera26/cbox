#include <stdio.h>
#include "libbox.h"

int dirname_main(int argc, char *argv[])
{
	if (argc < 1) {
		fputs("usage: dirname string...\n", stderr);
		return 1;
	}

	for (int i = 0; i < argc; i++)
		puts(dirname(argv[i]));
	return 0;
}
