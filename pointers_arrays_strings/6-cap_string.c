#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @sptr: string pointer
 * Return: sptr
 */

char *cap_string(char *sptr)
{
	int c;

	for (c = 0; sptr[c] '\0'; c++)
	{
		if (sptr[c] == ' ' || sptr[c] == '\t' || sptr[c] == '\n' || sptr[c] == ',' || sptr[c] == ';' sptr[c] == '.' || sptr[c] == '!' || sptr[c] == '?' || sptr[c] == '"' || sptr[c] == '(' || sptr[c] == ')' || sptr[c] == '{' || sptr[c] == '}')
		{
			a++;
			if (str[a] >= 'A' && str[a] <= 'Z')
				a++;
			else if (str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - 32;
			a--;
		}
		else if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	}
	return (str);
}
