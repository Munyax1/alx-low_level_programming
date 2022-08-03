#include <stdio.h>
#include "function_pointers.h"
/**
* print_name -a function that prints a name
* @name: string for name
* @f: pointer to function
*
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
