#include "main.h"

/**
 * _strlen - this is used to return the length of the string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
