#include "main.h"

/**
 * _islower - Checks if a letter is lowercased or not.
 *
 * @c: parameter that represents the characted tested.
 *
 * Return: 1 if lowercased, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
