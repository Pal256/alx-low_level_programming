#include "main.h"

/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc ) != '\0')
	{
		*(dest + inc) = *(scr + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (0);
}
