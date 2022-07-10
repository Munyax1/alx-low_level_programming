#include "main.h"

/**
 * print_most_numbers - print numbers but nit 2 & 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
	if (num != 2 && num != 4)
	{
		_putchar(num + '0');
	}
	num++;
	}
	_putchar('\n');
}
