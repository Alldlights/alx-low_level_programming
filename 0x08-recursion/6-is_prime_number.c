#include "main.h"

/**
 * is_prime_number - returns 1 if number is a prime number
 * @n: number to be checked
 *
 * Return: 1 on success else 0
 */
int is_prime_number(int n)
{
	return (check_prime_num(n, 1));
}

/**
 * check_prime_num - check if number is prime
 * @n: the number to be checked
 * @i: the iterated times
 *
 * Return: 1 for prime else 0
 */
int check_prime_num(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime_num(n, i + 1));
}
