#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size of array
 * @c: the character to use
 * Return: ptr, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size * sizeof(char));
	while (size)
	{
		*(ar + size) = c;
		size--;
	}
	return (ar);
}
