#include "main.h"

/**
 * _puts_recursion - main - check the code
 * @s: character of string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
