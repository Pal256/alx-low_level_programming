#include "main.h"

/**
 * _stncpy - c function that cople a string
 * if the lenrth of the source string is less than the maixmum byte number,
 * the remainder of the destrination string is filled with null byte.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 * Return: return
 */

char *_strncp(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	        dest[i] = src[i];
	
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
