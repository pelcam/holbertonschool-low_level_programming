#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @sptr: string pointer
 * Return: sptr
 */

char *cap_string(char *sptr)
{
	int c;

	for (c = 0; sptr[c] != '\0'; c++)
	{
		if (sptr[c] == ' '
		|| sptr[c] == '\t'
		|| sptr[c] == '\n'
		|| sptr[c] == ','
		|| sptr[c] == ';'
		|| sptr[c] == '.'
		|| sptr[c] == '!'
		|| sptr[c] == '?'
		|| sptr[c] == '"'
		|| sptr[c] == '('
		|| sptr[c] == ')'
		|| sptr[c] == '{'
		|| sptr[c] == '}')
		{
			c++;
			if (sptr[c] >= 'A' && sptr[c] <= 'Z')
				c++;
			else if (sptr[c] >= 'a' && sptr[c] <= 'z')
				sptr[c] = sptr[c] - 32;
			c--;
		}
		else if (sptr[0] >= 'a' && sptr[0] <= 'z')
		sptr[0] = sptr[0] - 32;
	}
	return (sptr);
}
