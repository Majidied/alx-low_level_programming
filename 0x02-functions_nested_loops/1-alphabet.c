#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);
	_putchar('\n');
}
