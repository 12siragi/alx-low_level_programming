#include "main.h"

/**
 * _isalpha - Checks if a letter is an alphabet or not.
 *
 * @c: parameter that represents the letter tested.
 *
 * Return: 1 in case of an alphabet letter, 0 otherwise.
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
