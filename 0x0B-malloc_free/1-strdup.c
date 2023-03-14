#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, a = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[a])
		a++;
	s = malloc((sizeof(char) * a) + 1);
	if (s == NULL)
		return (NULL);

	while (i < a)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

