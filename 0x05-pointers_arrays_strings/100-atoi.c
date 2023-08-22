#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: string.
 */
int _atoi(char *s)
{
	short boolean;
	int i, ms, r;

	i = ms = r = boolean = 0;
	ms = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			ms *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			r *= 10;
			r -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	r *= ms;
	return (r);
}
