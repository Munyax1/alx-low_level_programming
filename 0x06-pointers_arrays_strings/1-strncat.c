#include "main.h"

/**
 * _strncat - function that concatenate two strings
 * @dest: first argument
 * @src: second argument
 * @n: number of bytes used from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int size1, size2;

	size1 = 0;
	size2 = 0;

	while (*(dest + size1) != '\0')
	{
		size1++;

	}
	while (size2 < n)
	{
		*(dest + size1) = *(src + size2);
		if (*(src + size2) == '\0')
			break;
		size1++;
		size2++;

	}
	return (dest);
}
