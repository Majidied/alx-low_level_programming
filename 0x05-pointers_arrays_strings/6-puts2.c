#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: pointer to string
 * Return: Nothing
 */

void puts2(char *str)
{
	int l = 0, i = 0;

	while (*(str + l) != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');

}
