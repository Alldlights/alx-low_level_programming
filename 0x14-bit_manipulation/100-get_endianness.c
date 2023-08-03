#include "main.h"

/**
 * get_endianness - a function that check the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		unsigned int num;
		unsigned char bytes[sizeof(unsigned int)];
	} test;

	test.num = 1;

	if (test.bytes[0] == 1)
		return (1);
	else
		return (0);
}
