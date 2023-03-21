#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return : 0
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return 0;
}
