#include "main.h"

/**
 * _strcat - a function that concatenates 2 string
 * @dest:char to concat
 * @src:char to concat
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

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
	return (s);
}
