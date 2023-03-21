#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Description: 'task 7'
 *
 * @x: does take an integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
