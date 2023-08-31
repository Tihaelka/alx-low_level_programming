#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * This program demonstrates the print_binary
 * function that prints the binary
 * representation of an unsigned long integer.
 * @n: the numbert to be printed in binary format
 * Return : void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

