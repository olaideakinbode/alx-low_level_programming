#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: dest string
 * @src: src string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	char *b = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (b);
}
