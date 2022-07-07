#include "main.h"

/**
 * _islower - Short description, single line
 * @c: parameter value to be compared
 * Return: 0 upon successful execution.
 */
int _islower(int c)
{

if (c > 'a' && c < 'z')
{
	return (1);
}

else
{
	return (0);
}
}