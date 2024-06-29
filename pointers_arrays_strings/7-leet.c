#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: the input string
 * Return: the encoded string
 */

char *leet(char *c)
{
	char map[128];
	int i;

	for (i = 0; i < 128; i++)
	{
		map[i] = i;
	}

	map['a'] = '4';
	map['A'] = '4';
	map['e'] = '3';
	map['E'] = '3';
	map['o'] = '0';
	map['O'] = '0';
	map['t'] = '7';
	map['T'] = '7';
	map['l'] = '1';
	map['L'] = '1';
	
	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = map[(int)c[i]];
	}
	
	return c;
}
