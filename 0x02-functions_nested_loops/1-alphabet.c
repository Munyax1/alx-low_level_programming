#include "main.h"
/**
 * main - prinst alphabets in lowercase a to z
 *
 * Return: void
 * */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
