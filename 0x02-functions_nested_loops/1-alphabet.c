#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
