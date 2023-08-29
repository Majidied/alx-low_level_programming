#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int counter;

	for (; haystack[0]; haystack++)
	{
		for (counter = 0; haystack[counter] == needle[counter]; counter++)
		{
			if (!(needle[counter]))
			{
				return (haystack);
			}
		}
	}
	return (0);
}
