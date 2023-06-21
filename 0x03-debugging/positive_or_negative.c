#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive or negative - check if i is positive or negative
 * @i: is the int to be checked
 *i > 0 postive, i < 0  negative, i = 0 is 0
 * Return: always 0 (succes)
 */

void positive_or_negative(int i){
	if (i > 0)
	printf("%d is positive\n", i);
	else if (i == 0)
	printf("%d is zero\n", i);
	else
	printf("%d is negative\n", i);
}
