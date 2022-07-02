#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 upon successful execution
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}	
if (n == 0)
{
printf("%i is zero\n", n);
}
else if ( n < 0)
{
printf("%i is negative\n", n);
}

return (0);
}
