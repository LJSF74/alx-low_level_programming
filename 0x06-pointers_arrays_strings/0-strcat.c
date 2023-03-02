#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: new string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int j = strlen(src);
	int k = 0;

	while (k < j)
	{
		*(dest + i) = *(src + k);
		i++;
		k++;
	}
	return (dest);
}
