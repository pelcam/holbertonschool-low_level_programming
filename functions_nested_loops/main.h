#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	printf("\n");
}

#endif
