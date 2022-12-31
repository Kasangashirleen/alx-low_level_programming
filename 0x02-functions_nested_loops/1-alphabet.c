#include "Main.h"

/**
 * print_alphabet - print alphabet
 * Return: 0 if code runs successfully
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
