#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @ch: the character checked
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
