#include "main.h"

/**
 * print_line - print '_' n times
 * @n: patametre n times to print
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		j = 0;
		while (j <= n)
		{
			_putchar('_');
			j++;
		}
	}
		_putchar('\n');
}
