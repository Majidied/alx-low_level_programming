#include "main.h"

/**
  * _strchr - Locates first occurance of a character in a string
  * @s: String to check
  * @c: Character to search
  * Return: Pointer to first occurance of c
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
