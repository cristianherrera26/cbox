#include <unistd.h>
#include <stdio.h>

/* We really don't use it but we need that all main functions have the same signature */
int logname_main(int argc, char *argv[]) 
{
	char *log = getlogin();
	if (!log) { fputs("getlogin fails", stderr); return 1; }
	puts(log);
	return 0;
}
