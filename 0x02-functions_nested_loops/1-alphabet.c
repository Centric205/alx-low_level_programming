#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: 0 upon successful execution.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}

	_putchar('\n');

}