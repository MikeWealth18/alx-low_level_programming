#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
			_putchar(x);
		_putchar('\n');
	}
}
