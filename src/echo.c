#include <stdio.h>
#include "libbox.h"

int echo_main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++) {
		if (i) putchar(' ');
		fputs(argv[i], stdout);
	}

	putchar('\n');
	return 0;
}
