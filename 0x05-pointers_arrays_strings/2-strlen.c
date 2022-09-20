#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: return length as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	whlie (*(s + len) != '\0')
		len++;

	return (len);
}
