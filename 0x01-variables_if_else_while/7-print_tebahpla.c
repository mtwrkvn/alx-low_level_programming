#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * in reverse followed by a new line.
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
