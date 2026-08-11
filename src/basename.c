#include <stdio.h>
#include "libbox.h"

int basename_main(int argc, char *argv[])
{
	fprintf((argc == 1) ? stdout : stderr, (argc == 1) ? basename(argv[0]): "usage: basename <string>");
	fputc('\n', (argc == 1) ? stdout : stderr);
	return (argc == 1) ? 0 : 1;
}
