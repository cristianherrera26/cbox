#include <string.h>

char *progname;

char
*basename(char *str)
{
	char *p = strrchr(str, '/');
	if (p != NULL)
		return p + 1;
	return str;
}

char
*dirname(char *str)
{
	int len = strlen(str);
	while (str[len--] != '/');
	str[len + 1] = 0;
	return str;
}

void
set_progname(char *user_progname)
{
	if ((progname = strrchr(user_progname, '/')) == NULL)
		progname = user_progname;
	else
		progname++;
}

char
*get_progname(void)
{
	return progname;
}
