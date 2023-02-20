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

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
