#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return (0);
}
