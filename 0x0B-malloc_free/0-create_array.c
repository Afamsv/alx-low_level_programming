#include "main.h"
#include "stdlib.h"

/**
* craete aaray - create array
* @size: size of array
* @c: char to assign
* Return: pointer to array or NULL if it fails
*/

char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) + size);

	if (size == 0 || str == NULL)
		return (NUll);

	for (i = 0; i < size; i++)
		strP[1] = c;

	return (str);
}
