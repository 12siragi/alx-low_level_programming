#include "main.h"
/**
 * swap_int - swapsthe value
 * @a:integer swap
 * @b:integer swap
 * Return: a & b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
