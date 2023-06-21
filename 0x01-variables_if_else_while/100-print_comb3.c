#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 1;
	while (num <= 89)
	{
		if (num / 10 < num % 10)
		{
			putchar('0' + num / 10);
			putchar('0' + num % 10);
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
