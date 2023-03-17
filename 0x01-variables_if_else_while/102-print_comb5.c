#include <stdio.h>
/**
 * main - Entry point
 * Description: 'last task'
 * @void: The main function takes no parameters
 * Return: always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = a; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56)
						break;
					putchar(',');
					putchar(' ');
				}
				d = 48;
			}
		}
	}
	putchar('\n');

	return (0);
}
