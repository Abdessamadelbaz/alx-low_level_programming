#include <stdio.h>

/**
*main -combinations of single-digit numbers separated with ','
*
* Return: 0
*/
int main(void)
{
	int number ;

	number = 0;
	while (number <= 9)
	{
		putchar('0' + number % 10);
		 if(number < 9)
			{
			putchar(',');
                	putchar(' ');
			}
		 number++;
	}
	putchar('\n');
	return (0);
}



