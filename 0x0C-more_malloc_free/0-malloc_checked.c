#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: integer variable dat holds the memory size
 * Return: 0 (successful)
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
