#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Retuen: Always 0 (Success)
 */
int main(void)
{
	int ef = 'a';
	int EF = 'A';

	while (ef <= 'z')
	{
		putchar(ef);
		ef++;
	}
	while (EF <= 'Z')
	{
		putchar(ef);
		ef++;
	}
	putchar('\n');
	return (0);
}
