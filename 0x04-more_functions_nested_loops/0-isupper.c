#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isupper - Checks whether a character is uppercase or not.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is uppercase, 0 otherwise.
 */
int _isupper(int c){
	if (c >= 'A' && c <= 'Z')
	{
	return (1); /*uppercase character*/
	}
	else
	{
	return (0); /*not an uppercase character*/
	}
}

