#include "main.h"

/**
 * _islower - checks lowercase character
 * @c: the character with an ASCII value
 *
 * Returns: 1 if character is lowercase
 * else Returns 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
