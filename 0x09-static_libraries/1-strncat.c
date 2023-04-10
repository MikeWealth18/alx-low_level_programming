#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - function
 * @dest: first characrter
 * @src: second character
 * @n: integer
 * Return: content
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
