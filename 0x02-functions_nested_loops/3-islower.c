#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @ch: the character checked
 * Return:1 if lowercase, otherwise 0.
 */

int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
