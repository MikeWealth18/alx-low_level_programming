#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - function
 * @s: character
 * @accept: character
 * Return: son't know
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
