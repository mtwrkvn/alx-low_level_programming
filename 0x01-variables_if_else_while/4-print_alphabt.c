#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line except char q and e
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
