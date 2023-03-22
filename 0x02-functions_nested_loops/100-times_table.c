#include "main.h"

/**
 * print_times_table - prints times table from 0 to n
 *
 * Description: 'task 12'
 *
 * @n: does take an integer
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int x = 0;
	int y = 0;

	if (n == 0)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
	else if (!(n > 15 || n < 0))
	{
		for (; x <= n; x++)
		{
			for (; y <= n; y++)
			{
				if (((x * y) >= 10) || (x * (y + 1)) >= 10)
				{
					if ((x * y) >= 10 && (x * y) < 100)
					{
						_putchar(((x * y) / 10) + '0');
						_putchar(((x * y) % 10) + '0');
					}
					else if ((x * y) >= 100)
					{
						_putchar(((x * y) / 100) + '0');
						_putchar((((x * y) % 100) / 10) + '0');
						_putchar((((x * y) % 100) % 10) + '0');
					}
					else
					{
						_putchar((x * y) + '0');
					}
					if (y != n)
					{
						_putchar(',');
						_putchar(' ');
						if ((x * y) < 100)
							_putchar('x');
					}
				}
				else
				{
					_putchar((x * y) + '0');
					if (y != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			y = 0;
			_putchar('\n');
		}
	}
}
