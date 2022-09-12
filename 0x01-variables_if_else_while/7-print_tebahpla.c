#include <stdio.h>

/**
 * main - lowercase of alphabet in reverse
 *
 * Return: Always (okay)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
