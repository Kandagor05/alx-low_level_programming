#include "main.h"

/**
 * get_endianness - Checks if machine is little or big endian
 * Return: 0 for greater, 1 for smaller
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
