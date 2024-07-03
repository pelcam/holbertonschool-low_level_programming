#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: where to find the occurence of the substring
 * @needle: occurence to find
 * Return:
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		 if (*n == '\0')
			 return (haystack);
		 haystack++;
	}
	return ("NULL");
}
