#include <stdio.h>

/**
 * main - fibonacci of first 50, start with 1 and 2
 * Return: (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;

	printf("%lu", f1);
	for (i = 1; i < 50; i++)
	{
		printf(", %lu", f2);
		f2 += f1;
		f1 = f2 - f1;
	}
	printf("\n");
	return (0);
}
