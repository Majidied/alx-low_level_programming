#include "main.h"

/**
  * _strchr - Locates first occurance of a character in a string
  * @s: String to check
  * @c: Character to search
  * Return: Pointer to first occurance of c
  */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{

		if (s[0] == c)

			return (s);

		else if (s[1] == c)

			return (s + 1);

		s++;
	}
	return (s + 1);
}
