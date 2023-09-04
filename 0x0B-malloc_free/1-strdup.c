#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	unsigned int len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);
	while (len)
		duplicate[len - 1] = str[len - 1];
	return (duplicate);
}

