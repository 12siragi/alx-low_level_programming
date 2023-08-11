#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @max: range of values stored
 * @min: rang values
 * Return:always
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
