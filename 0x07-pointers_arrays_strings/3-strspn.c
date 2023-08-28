#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring
  * @s: String to search through
  * @accept: string to search
  * Return: Number of bytes the segment of s which
  *	    consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccepted = 0;
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				isAccepted = 1;
				break;
			}
		}
		if (!isAccepted)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
