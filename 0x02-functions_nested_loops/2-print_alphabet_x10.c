#include "main.h"

/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char letter;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
