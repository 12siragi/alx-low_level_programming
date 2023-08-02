#include "main.h"
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
		 _puts_recursion(s + n);
	}
	else 
		putchar('\n');
}
