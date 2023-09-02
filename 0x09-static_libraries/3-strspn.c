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
	unsigned int cnt1, cnt2;

	for (cnt1 = 0; s[cnt1] != '\0'; cnt1++)
	{
		for (cnt2 = 0; accept[cnt2] != '\0'; cnt2++)
		{
			if (s[cnt1] == accept[cnt2])
			{
				break;
			}
		}
			if (!(accept[cnt2]))
			{
				break;
			}
	}
	return (cnt1);
}
