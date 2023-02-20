#include <stdio.h>

/**
 * main - a program that prints all possible combinations of
 * single-digit numbers, separated by ,followed by space in ascending order
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		if (i != 9)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i);
		}
	}

	return (0);
}
