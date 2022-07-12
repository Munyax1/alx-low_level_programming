#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s : first argument
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
