#include "main.h"
/**
 * print_alphabet - entry point
 * Description - prints the alphabet, in lowercase, followed by a new line
 * Return
 */
void print_alphabet(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

