#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *T;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	T = malloc(nmemb * size);

	if (T == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		T[i] = 0;

	return (T);
}
