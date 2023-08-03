#include "main.h"
/**
 *  _strlen_recursion - print lenngth of string
 *  @s: length of thre string
 *  Return: always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
