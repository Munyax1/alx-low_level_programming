#include <stdio.h>

/**
 * main - entry point
 * Decription: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int x, sum = 0;

	while (x < 1024)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
	sum += x;
	}
	x++;
	}
	printf("%d\n", sum);
	return (0);
}
