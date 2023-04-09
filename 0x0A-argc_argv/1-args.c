#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
if (argv[i] == argv[argc - argc])
{
continue;
}
}
printf("%d\n", i - 1);
return (0);
}
