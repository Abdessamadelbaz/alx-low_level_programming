#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 12;
	while (num <= 789)
	{
		if (num / 100 < num / 10 % 10 && num / 10 % 10 < num % 10)
		{
			putchar('0' + (num / 100) % 10);
			putchar('0' + (num / 10) % 10);
			putchar('0' + num % 10);
			if (num < 789)
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
