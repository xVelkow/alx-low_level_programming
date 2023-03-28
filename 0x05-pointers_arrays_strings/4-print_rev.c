#include "main.h"
/**
 * print_rev - reverse
 * Description: task4
 * @s: p to char
 * Return: void
 */
void print_rev(char *s)
{
	int i, length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
