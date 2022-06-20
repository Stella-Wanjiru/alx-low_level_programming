#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
