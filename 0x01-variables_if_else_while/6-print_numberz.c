#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number <= 9)
	{
		putchar('0' + number % 10);
		number++;
	}
	putchar('\0');
	return (0);
}
