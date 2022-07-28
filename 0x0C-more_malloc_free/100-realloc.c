#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes, of the allocated space for `ptr`
 * @new_size: size in bytes, of the new memory block
 * Return: pointer to new memory block, or NULL if error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	copy = ptr;

	for (i = 0; i < old_size; i++)
		p[i] = copy[i];
	free(ptr);

	return (p);
}
