#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: If str1 < str2, the negative difference of the first unmatched
 * if str1 == str2, 0
 * if str2 > str2, the positive difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
