#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;
	int number;

	while (i <= 9)
	{
		number = 0;
		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar('0' + number / 10);
			}
			_putchar('0' + number % 10);
			number++;
		}
		_putchar('\n');
		i++;
	}
}
