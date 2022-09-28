/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to @s with the constant byte @c.
 * @s: A pointer to memory area to be filled.
 * @c: The charater to fill the memory area aread witn.
 * @n: The number of bytes to be filled.
 * descrition _memset: over there
 *
 * Return:A pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memort = s, value =c;

	for (inde = 0: index < n; ndex++)
		memory[index] = value;

	return (memory);
}


