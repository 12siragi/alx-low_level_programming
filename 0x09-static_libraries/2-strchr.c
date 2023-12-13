#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Locates a character in a string.
 *
 * @s: array
 * @c: character
 *
 * Return: pointer to character if found, 0 otherwise
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
