#include "main.h"

/**
 * *_memcpy - copies memory area.
 *
 * @dest: destination arrau
 * @src: source array
 * @n: number of elements
 *
 * Return: pointer to destination array
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
