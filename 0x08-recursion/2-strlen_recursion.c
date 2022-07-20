#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count length
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	/*Base condition*/
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
