#include "main.h"

/**
 * times_table - prints times table from 0 to 9
 *
 * Description: 'task 0'
 *
 * @void: does not take any parameters
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int x = 0;
	int y = 0;

	for (; x < n; x++)
	{
		for (; y < n; y++)
		{
			if (((x * y) >= n) || (x * (y + 1)) >= n)
			{
				if ((x * y) >= n)
					_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((x * y) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		y = 0;
		_putchar('\n');
	}
}
