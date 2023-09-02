#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int count;

	for (; *s != '\0'; s++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{

			if (*s == accept[count])
				return (s);
		}
	}
	return (0);
}
