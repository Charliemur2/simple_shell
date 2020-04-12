#include "sh_header.h"

/**
 * _strcmp - function that compares two strings and exit if they are equal.
 * @strtocmp: String to compare
 *
 * Return: Always 0.
 */

int _strcmp(char *strtocmp)
{
	int i = 0, temp = 0;
	char *esc = "exit";

	while (strtocmp[i] && esc[i])
	{
		if (strtocmp[i] != esc[i])
			temp = strtocmp[i] - esc[i];
		i++;
	}
	if (temp == 0)
	{
		free(strtocmp);
		exit(0);
	}
	return (0);
}