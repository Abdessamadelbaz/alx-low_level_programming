#include "main.h"
/**
 * print_diagonal - print '\' n times
 * @n: patametre n times to print
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
