#include <stdio.h>
/**
 * main - Entry point
 * Description: task 9
 * @void: none
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
