#include "main.h"

/**
 * get_endianness - checks if a machine is big or little endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
	unsigned int ie= 1;
	char *c = (char *) &e;

	return (*c);
}
