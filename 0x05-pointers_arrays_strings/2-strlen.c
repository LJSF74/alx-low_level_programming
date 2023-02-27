#include "main.h"
/**
 * _strlen - prints lenght of a string
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
