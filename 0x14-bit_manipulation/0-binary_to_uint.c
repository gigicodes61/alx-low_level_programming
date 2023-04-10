#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int z;
	int x;

	if (b == NULL)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		z = 0;
		if (b[x] != '0' && b[x] != '1')
			return (0);
		z <<= 1;
		if (b[x] == '1')
			z++;
	}
	return (z);
}
