#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		_putchar(m);
		m++;
	}
	_putchar('\n');
}
