#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;
	char c;

	while (*(src + i) != '\0')
	{
		i++;
	}
	i++;
	for (j = 0 ; j < i ; j++)
	{
		c = *(src + j);
		*(dest + j) = c;
	}
	return dest;
}
