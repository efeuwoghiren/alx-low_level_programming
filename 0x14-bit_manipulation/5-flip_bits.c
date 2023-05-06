#include "main.h"

/**
 * flip_bits - counts the total number of bits to be changed
 * to get from one number to another
 * @k: first number
 * @l: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int k, unsigned long int l)
{
	int e, count = 0;
	unsigned long int current;
	unsigned long int exclusive = k ^ l;

	for (e = 63; e >= 0; e--)
	{
		current = exclusive >> e;
		if (current & 1)
			count++;
	}

	return (count);
}
