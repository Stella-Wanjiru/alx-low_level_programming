#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer of an array chars
 */
char *_strdup(char *str)
{
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
