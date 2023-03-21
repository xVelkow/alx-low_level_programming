#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 *
 * Description: 'task 11'
 *
 * @n: does take an integer
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	while (n < 98)
	{
		printf("%d\, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d\, ", n);
		n--;
	}
}
