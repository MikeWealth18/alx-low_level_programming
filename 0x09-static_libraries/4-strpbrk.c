#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - function
 * @s: charcter
 * @accept: charactetr
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
