#include "main.h"

/**
  * _memcpy - Copies memory area to dest
  * @dest: Destination of memory area
  * @src: Source of memory area
  * @n: Number of intergers to copy
  * Return: Pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	(dest)[i] = (src)[i];
	return (dest);
}
