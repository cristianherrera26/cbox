#include <stdio.h>
#include "libbox.h"

int yes_main(int argc, char *argv[])
{
	char *print = (argc > 0) ? argv[0] : "y";
	while (1) { puts(print); }
	return 1; /* yes shouldn't fail */
}
