#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: poiter of character
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
