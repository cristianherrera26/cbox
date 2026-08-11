#include <string.h>

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
