#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - function
 * @haystack: character
 * @needle: character
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
