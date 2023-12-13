#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src, including the.
 *  terminating null byte (\0), to the buffer pointed to by destt
 *
 *  @dest: destination arrayy.
 *  @src: source arrayy.
 *
 *  Return: pointer to destination arrayy.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
		{
			dest[i + 1] = '\0';
		}
	}
	return (dest);
}
