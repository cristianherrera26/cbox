#include <sys/param.h>
#include <unistd.h>
#include <stdio.h>

/* We really don't use it but we need that all main functions have the same signature */
int pwd_main(int argc, char *argv[]) 
{
	char cwd[MAXPATHLEN];
	if (getcwd(cwd, sizeof(cwd)) == NULL) {
		fputs("getcwd fails\n", stderr);
		return 1;
	}

	puts(cwd);
	return 0;
}
