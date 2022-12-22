#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, ch;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
	}
}
