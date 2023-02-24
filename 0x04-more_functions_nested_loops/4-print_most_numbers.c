#include "main.h"

/**
 * print_numbers - print numbers since 0 up to 9
 * description: print the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
