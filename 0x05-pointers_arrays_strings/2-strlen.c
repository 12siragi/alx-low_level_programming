#include "main.h"
/**
 * int _strlen - function that turn the length of the string
 * @s: th length of the string
 * Return:always s as the string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
