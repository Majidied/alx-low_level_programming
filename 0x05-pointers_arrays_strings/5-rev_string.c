#include "main.h"

/**
  *rev_string - function to print the string in  reverse
  *@s: char to print
  * Return: nothing.
  */

void rev_string(char *s)
{
	int l = 0, c;
	char *b, *e, t;

	b = s;
	e = s;

	while (s[l] != '\0')
		l++;

	for (c = 0; c < l - 1; c++)
		e++;

	for (c = 0; c < l / 2; c++)
	{
		t = *e;
		*e = *b;
		*b = t;
		b++;
		e--;
	}
}
