#include "main.h"
#include <stdlib.h>

/**
* array_range - function to create an array of int range
* @min: minimun array int
* @max: maximum array int
* Return: A pointer to created array, NULL if min > max, or malloc fails
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
