#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Return if a number is prime
 * @n: The number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
        return (check_prime(n, 1));
}

/**
 * check_prime - ckeck if number is a prime number
 * @n: The number to be checked
 * @i: the iteration times
 * Return: 1 for prime number or 0 composite
 */

int check_prime(int n, int i)
{
        if (n <= 1)
                return (0);
        if (n % i == 0 && i > 1)
                return (1);
        return (check_prime(n, i + 1));
}