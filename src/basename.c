#include <stdio.h>
#include "libbox.h"

#define check(op1, op2) ((argc == 1) ? op1 : op2)

int basename_main(int argc, char *argv[])
{
	fputs(check(basename(argv[0]), "usage: basename <string>"), check(stdout, stderr));
	fputc('\n', check(stdout, stderr));
	return check(0, 1);
}
