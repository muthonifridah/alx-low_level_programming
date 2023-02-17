#include <stdio.h>
/**
 * main - A program that print by putchar
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
