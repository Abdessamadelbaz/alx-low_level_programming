#include "main.h"

/**
 * swap_int -> Swaps the values of two integers
 *
 * @a: First Input
 * @b: Second Input
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
