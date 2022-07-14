#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: first argument
 * @src: second argument
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int s1;
	int s2;

	s1 = 0;
	s2 = 0;

	while (*(dest + s1) != '\0')
	{
		s1++;
	}
	while (s2 >= 0)
	{
		*(dest + s1) = *(src + s2);
		if (*(src + s2) == '\0')
			break;

		s1++;
		s2++;
	}
	return (dest);
}
