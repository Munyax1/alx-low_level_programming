#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to first occurrence of c
 * @c: character to be located in string
 * Return: returns pointer or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
