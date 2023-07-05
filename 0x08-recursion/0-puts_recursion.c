#include <stdio.h>
/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * Description:
 * This function takes a string as input and prints it to the standard output,
 * followed by a new line character. It uses recursion to print each character
 * of the string until it reaches the null terminator ('\0').
 *
 * @s: The input string to be printed.
 *
 * Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
