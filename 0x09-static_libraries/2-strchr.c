#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
