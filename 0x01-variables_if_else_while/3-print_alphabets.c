#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; CH <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
