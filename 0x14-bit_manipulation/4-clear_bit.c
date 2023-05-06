#include "main.h"

/**
 * clear_bit - sets the given bit value to 0
 * @k: pointer to number to be changed
 * @index: bit index to be cleared
 *
 * Return: 1  successful, -1 failed
 */
int clear_bit(unsigned long int *k, unsigned int index)
{
	if (index > 63)
		return (-1);

	*k = (~(1UL << index) & *k);
	return (1);
}
