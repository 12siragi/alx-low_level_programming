#include "main.h"

/**
 * _abs - Gets the absolute value of an integer.
 *
 * @n: The integer.
 *
 * Return: n if greater than 0, -n if smaller than 0, 0 if zero.
 */
int _abs(int n)
	{
		if (n >= 0)
		{
			return (n);
		}
		return (-n);
	}
