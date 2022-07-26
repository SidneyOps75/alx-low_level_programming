#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *i_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	i_array = malloc(sizeof(c) * size);

	if (i_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		i_array[i] = c;

	return (i_array);
}
