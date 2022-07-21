#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @string: pointer to string
 * Return: void
 */


void _puts_recursion(char *string)
{
if(string == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(string);
	_puts_recursion(string + 1);
}

}

