#include "main.h"

/**
 * main - prints _putchar followed by a new line.
 *
 * Return: 0 Always.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
