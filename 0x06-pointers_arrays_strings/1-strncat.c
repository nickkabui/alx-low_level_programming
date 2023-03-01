#include "main.h"
/**
 * _strncat - Concentrates two strings
 * @dest: The number first to append
 * @src: The second number to append
 * @n: The number of bytes from src to be appended to dest
 * Return: The pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
