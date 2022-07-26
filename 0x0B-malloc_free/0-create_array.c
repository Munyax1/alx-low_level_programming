#include "main.h"

/**
* create_array - creats an array of chars
* @size: size of array to be created
* @c: char to initialize the array
* Return: Returns a pointer to the array, or NULL if it fails (size = 0)
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
