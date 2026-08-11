#include <stdio.h>
#include "libbox.h"

int dirname_main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
		puts(dirname(argv[i]));
	return 0;
}
