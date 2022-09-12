#include <stdio.h>

/**
 * main - prints the numberz since 0 to 9
 *
 * Return: Always (okay)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
