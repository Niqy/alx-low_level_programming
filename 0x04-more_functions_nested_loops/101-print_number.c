#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int coco;

	coco = n;
	if (n < 0)
	{
		_putchar(45);
		coco = -n;
	}
	if (coco / 10)
		print_number(coco / 10);
	_putchar((coco % 10) + '0');
}
