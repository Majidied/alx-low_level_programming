#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 * Return: nothing.
 */

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
		_putchar(j + '0');
	_putchar('\n');
}
