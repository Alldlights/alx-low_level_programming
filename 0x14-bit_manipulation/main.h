#ifndef MAIN_H
#define MAIN_H

/**
 * EndiannessTest - union datatype
 * @num: unsigned int
 * @bytes: array of bytes
 *
 * Description: union structure
 */
union EndiannessTest
{
	unsigned int num;
	unsigned char bytes[sizeof(unsigned int)];
} test;

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
