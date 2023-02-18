#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ef = 'a';

	while (ef <= 'z')
	{
		putchar(ef);
		ef++;
	}
	putchar('\n');
	return (0);
}
