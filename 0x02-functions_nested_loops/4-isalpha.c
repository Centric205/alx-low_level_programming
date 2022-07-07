#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter. 
 *
 *@c: value to print
 * Return: 0 upon successful execution.
 */

int _isalpha(int c)

{

if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
	return (1);
}

else
{
	return (0);
}

}