#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest:target
 * @src:area whre bytes are copied from
 * @n: number of bytes to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
