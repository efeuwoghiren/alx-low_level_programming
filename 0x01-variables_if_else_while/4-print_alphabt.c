#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabes both except e and q
 *
 * Return: Alwaays 0 (Success)
 */
int main(void)

{
	char ef = 'a';

	while (ef <= 'z')
	{
		if ((ef != 'e') && (ef != 'q'))
		{
			putchar(ef);
		}
		ef++;
	}
	putchar('\n');
	return (0);
}
