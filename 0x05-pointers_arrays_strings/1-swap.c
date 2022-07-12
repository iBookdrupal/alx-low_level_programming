/**
* swap_int - swapping integers
* @a: parameter 1
* @b: parameter 2
*
*/

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;
}
