#include "main.h"
#include "stdio.h"

/**
 * print_diagsums- sum diagonal values
 *
 * @a: pointer to array
 *
 * @size: int
 *
 *Return: sum of two sides
 *
 */

void print_diagsums(int *a, int size)
{
	int c1, c2, s1, s2;

	s1 = 0;
	s2 = 0;

	for (c1 = 0; c1 < size; c1++)
	{
		s1 += a[(size + 1) * c1];
	}
	for (c2 = 0; c2 < size; c2++)
	{
		s2 += a[(size - 1) * (c2 + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
