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

	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of a int: %d byte(s)\n", sizeof(b));
	printf("size of a longint: %d byte(s)\n", sizeof(c));
       	printf("size of a longlongint: %d byte(s)\n", sizeof(d));
        printf("size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
