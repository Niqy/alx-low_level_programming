#include <stdio.h>
/**
 * main - alphabet will be printed in lowercase.
 *
 * Return: 0 is always success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

