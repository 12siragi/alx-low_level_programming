#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 *@str: string to print
 *s: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
