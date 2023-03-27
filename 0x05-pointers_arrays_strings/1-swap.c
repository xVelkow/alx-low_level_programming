/**
 * swap_int - swap numbers
 * Description: task1
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
