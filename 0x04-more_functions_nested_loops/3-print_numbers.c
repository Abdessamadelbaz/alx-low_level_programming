#include "main.h"

/**
 * print_numbers - print numbers
 */
void print_numbers(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
