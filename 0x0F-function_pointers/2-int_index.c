#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array: Array
*@size: number of elements in array
*@cmp: function which compare values
*
*Return: returns -1, 0.
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);

}
