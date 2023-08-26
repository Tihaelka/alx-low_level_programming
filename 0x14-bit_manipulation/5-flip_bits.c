#include "main.h"
/**
 * flip_bits - return the number of bits to flip to get
 * from one number to another
 * @m: 1st number
 * @n: 2nd number
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
	}
	return (i);
}
