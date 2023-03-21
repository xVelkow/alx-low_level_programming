#include <stdio.h>

/**
 * main - Entry point
 * Description: print all natural numbers that are multiples of 3 or 5
 * @void: takes no parameters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for(n = 0; n < 1024; n++)
	{
		if(n % 3 == 0 || n % 5 == 0)
		{
			printf("%d ", n);
		}
	}
	return (0);
}
