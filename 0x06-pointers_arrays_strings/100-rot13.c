#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}
