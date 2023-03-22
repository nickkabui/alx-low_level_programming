#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for an interger
 * @array: an array
 * @size: The number of elements in the array
 * @cmp: Is a pointer to the function to be used to compare values
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)

	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}

