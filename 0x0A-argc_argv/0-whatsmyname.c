#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of argument
 * @argv: array of argument
 * @_attribute_((unused)) argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
