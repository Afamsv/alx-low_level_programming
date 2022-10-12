#include "function_pointers.h"

/**
* print_name - prints a name
* @name: name to be printed
* @f: name is printed according to this function
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name)
}
