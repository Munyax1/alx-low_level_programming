#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Description: print numbers 1 -100 replacing multiples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples of both with FizzBuzz
 * Return: zero
 */

int main(void)

{
	int x;

	for (x = 1; x < 100; x++)
	{
	if (x % 3 == 0 && x % 5 == 0)
		printf("FizzBuzz ");
	else if (x % 3 == 0)
		printf("Fizz ");
	else if (x % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ", x);
	}
	printf("Buzz\n");
	return (0);
}
