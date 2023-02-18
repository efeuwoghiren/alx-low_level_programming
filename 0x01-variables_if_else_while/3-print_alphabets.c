#include <stdio.h>
#include <stdlib.h>

/**
 * main - Returns alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
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
		putchar(EF);
		EF++;
	}
	putchar('\n');
	return (0);
}
