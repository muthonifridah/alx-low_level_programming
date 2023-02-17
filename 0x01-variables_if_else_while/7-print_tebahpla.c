#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that print from zto a
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low <= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
