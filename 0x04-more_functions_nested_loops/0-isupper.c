#include "main.h"
/**
 * _isupper: check if a character is uppercase
 * Description: 'task 0'
 * @c: integer
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
