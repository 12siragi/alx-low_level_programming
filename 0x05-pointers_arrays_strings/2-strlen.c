#include "main.h"
/**
 * int _strlen - function that turn the length of the string
 * @s: th length of the string
 * Return:always s as the string
 */
int _strlen(char *s)
{
	
	int l;

	s = "My first strlen!";
	
    l = _strlen(s);
    printf("%d\n", l);
    return (0);
}
