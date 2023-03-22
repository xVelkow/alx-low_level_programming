#include <stdio.h>
/**
 * main - Entry point
 * Description: the first 98 of fibonacci starting from 1 2
 * @void: no params
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	long long int y = 0;
	long long int x = 1;
	long long int temp;

	for (i = 0; i < 98; i++)
	{
		temp = x;
		x = x + y;
		y = temp;
		printf("%lld", x);
		if (i < 97)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
