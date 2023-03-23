#include "main.h"
/**
 * print_square - print size squares
 * Description: task8
 * @size : int
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(35);
		_putchar('\n');
	}

}
