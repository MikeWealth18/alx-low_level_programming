#include "main.h"

/**
 * _isupper - checks for lowercase characters
 * @c: Character to be checked
 * Return: 1 for uppercase character and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
