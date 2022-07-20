#include "main.h"

/**
* _sqrt_recursion - return the natural square root of a number
* @n: int number
* Return: square root or -1
*/

int _sqrt_recursion(int n)
{
	int sqroot_fun(int n, int sq);
	int sq = 1;

	return (sqroot_fun(n, sq));
}

/**
* sqroot_fun - helper function to solve _sqrt_recursion
* @sq: number to determine square root
* @n:  int number
* Return: square root or -1
*/

int sqroot_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
	return (sqroot_fun(n, ++sq));
	}
	else
	{
	return (-1);
	}
}
