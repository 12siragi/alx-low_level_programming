#include "main.h"
#include <stdio.h>
/**
 *  _puts_recursion -  function that print a strng
 *  @s: input char
 *
 *  Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		puts_recursion(s + 1);
	}
	else 
		putchar('\n');
}
