#include "main.h"
/**
 * _memset - fill the memory
 * @s - input valule
 * @b - input value
 * @n -input value
 *
 * return: change array with value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
