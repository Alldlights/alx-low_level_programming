#include "main.h"
/**
 * get_endianness - checks the endiannness of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *bytes = (unsigned char *)&num;

	return (int)(*bytes);
}
