#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argc: argument count
 * @argv: array of strings
 * Return: 1 for Error if no two arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mult = num1 * num2;
	printf("%d\n", mult);
	return (0);
}
