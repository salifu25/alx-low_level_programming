#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: integer pointer type
 * @b: integer pointer type
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
