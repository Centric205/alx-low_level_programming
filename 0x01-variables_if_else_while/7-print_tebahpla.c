#include <stdio.h>
/**
 * main - Program Entry point
 *
 * Return: Always 0 Successful execution
 */
int main(void)
{
char alphabet;

for (alphabet = 122 ; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}

putchar('\n');

return (0);
}
