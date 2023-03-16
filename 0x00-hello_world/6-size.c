#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : 'Task 6. sizes'
 *
 * @void : The main function takes no parameters
 *
 * printf : The main prints sizes of datatypes
 *
 * Return : always (0) : Success
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
