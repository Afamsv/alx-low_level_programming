#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	retunr (0);
}
