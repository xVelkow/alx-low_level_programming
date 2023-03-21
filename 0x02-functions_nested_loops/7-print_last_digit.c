#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Description: 'task 7'
 *
 * @int: does take an integer
 *
 * Return: Always 0 (Success)
 */
print_last_digit(int x)
{
	int last_digit = x % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
