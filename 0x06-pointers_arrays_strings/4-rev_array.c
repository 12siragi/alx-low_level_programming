#include "main.h"
/**
 * reverse_array - reverse array of interger
 * @a: array
 * @n:number of element of array
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
