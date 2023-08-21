#include "main.h"

/**
 * swap_int - exchange the value of two integers
 * @a:swaps the a integer
 * @b: swaps the b integer
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
