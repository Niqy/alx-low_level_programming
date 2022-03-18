#include <stdio.h>

/**
 * main - finding prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long val = 612852475143;
	long divisor = 2;
	long large_prime = 0;

	while (val != 1)
	{
		if (val % divisor == 0)
		{
			val = val / divisor;
			large_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", large_prime);
	return (0);
}
