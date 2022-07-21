#include "main.h"

/**
 *
 *
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return 1;
	}
	else if (n % 2 == 0 || n < 2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
