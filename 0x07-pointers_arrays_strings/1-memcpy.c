#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area is stored
 * @src: the memory area is copied
 * @n: value of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
