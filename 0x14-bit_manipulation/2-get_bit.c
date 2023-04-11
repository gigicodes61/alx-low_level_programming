#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @index: starting from 0 of the bit you want to get
 * @n: an integer
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int z;

	z = n >> index;

	if (index > 64)
	{
		return (-1);
	}
	else
		return (z & 1);
}
