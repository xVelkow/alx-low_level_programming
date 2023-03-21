#include <stdio.h>
/**
 * main - Entry point
 * Description: the first 50 of fibonacci starting from 1 2
 * @void: no params
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;
	int y = 0;
	int x = 1;
	int temp;

	for (i = 0; i < 50; i++)
	{
		temp = x;
		x = x + y;
		y = temp;
		printf("%d, ", x);
	}
	printf("\n");
	return (0);
}
