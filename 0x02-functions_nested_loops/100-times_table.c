#include "main.h"
/*
* main - Entry point
* @n : integer
* Return : always 0 (Success)
*/
void print_times_table(int n)
{
	int i;
	int j;
	int p;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            p = i * j;

            if (j == 0)
            {
                _putchar(p + '0');
            }
            else
            {
                if (p < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                else if (p < 100)
                {
                    _putchar(' ');
                }

                _putchar(p / 100 + '0');
                _putchar((p / 10) % 10 + '0');
                _putchar(p % 10 + '0');
            }

            if (j < n)
            {
                _putchar(',');
                _putchar(' ');
            }
        }

	_putchar('\n');
    }
}
