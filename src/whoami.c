#include <unistd.h>
#include <stdio.h>
#include <pwd.h>

/* We really don't use it but we need that all main functions have the same signature */
int whoami_main(int argc, char *argv[]) 
{
	struct passwd *pw = getpwuid(geteuid());
	if (!pw) { fputs("getpwuid fails\n", stderr); return 1; }
	puts(pw->pw_name);
	return 0;
}
