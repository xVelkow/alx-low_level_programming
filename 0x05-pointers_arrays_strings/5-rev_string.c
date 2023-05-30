#include "main.h"
/**
 * rev_string - reverse
 * Description: task5
 * @s: p to string
 * Return: void
 */
void rev_string(char *s)
{
int length;
int i;
for (length = 0; *s != '\0'; length++)
s++;
for (i = length - 1; i >= 0; i--)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
