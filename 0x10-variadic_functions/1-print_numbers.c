#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints a list of numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be printed.
 * @...: The variable number of integers to be printed.
 *
 * Description: This function takes a variable number of integers and prints
 * them to the standard output
 * separated by the string specified in @separator.
 * If @separator is NULL, no separator is printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int numbers = va_arg(args, int);

	printf("%d", numbers);

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	va_end(args);
	}
	printf("\n");
}

