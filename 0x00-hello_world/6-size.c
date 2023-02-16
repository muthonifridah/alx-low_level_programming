#include <stdio.h>
/**
 * main - program that prints the nsize of various computer and compile and run
 * Return (0) (sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: $lu byte(s)\n', (unsorted long)sizeof(a));
printf("Size of an int: $lu byte(s)\n', (unsorted long)sizeof(b));
printf("Size of a long int: $lu byte(s)\n', (unsorted long)sizeof(c));
printf("Size of a long long int: $lu byte(s)\n', (unsorted long)sizeof(d));
printf("Size of a float: $lu byte(s)\n', (unsorted long)sizeof(f));
return (0);
}

