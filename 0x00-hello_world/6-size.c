#include <stdio.h>
/**
 * main-Prints the full sizeof many var types
 *
 * Return: Always 0 (okay)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a longint: %d byte(s)\n", sizeof(c));
	printf("Size of a longlongint: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
