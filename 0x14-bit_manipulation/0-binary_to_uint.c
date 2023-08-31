#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 *
 * @b: A pointer to a string of 0 and 1 characters
 * representing the binary number.
 *
 * Return: The converted unsigned integer, or 0 if there is an
 * invalid character in the input string or if the input string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int result;

	if (b == NULL)
	{
		return (0);
	}

	for (; *b; b++)
	{
	if (*b != '0' && *b != '1')
	{
		return (0);
	}
	result = *b - '0';
	num = (num << 1) | result;
	}

	return (num);
}
