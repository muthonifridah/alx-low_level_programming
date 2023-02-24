#include "main.h"

/**
 * print_numbers - print numbers since 0 up to 9
 * description: print the numbers excluding 2 and 4
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		_putchar(c);
	}
	_putchar('\n');
}
