#include "main.h"

/**
 * factorial - function to calculate the factorial of a number
 * @n: the int to get it's factorial
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0) /*Base condition*/
		return (-1);
	else if (n == 0) /*Base condition*/
		return (1);
	else
		return (n * factorial(n - 1));
}
