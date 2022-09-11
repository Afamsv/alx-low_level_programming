#include <stdio.h>

/**
* main - print a-z exclude q and e
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
