#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a : first argument
 * @b : second argument
 * Description: swaps two integer values
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
