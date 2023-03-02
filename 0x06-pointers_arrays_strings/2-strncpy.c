#include "main.h"
#include <string.h>
/**
 * _strncpy - copies src string to dest
 * @dest: destination
 * @src: source
 * @n: num of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = strlen(src);
	int k = 0;

	if (n <= j)
	{
		while (k < n)
		{
			*(dest + k) = *(src + k);
			k++;
		}
	}
	else
	{
		while (k < j)
		{
			*(dest + k) = *(src + k);
			k++;
		}
		*(dest + k) = '\0';
	}
	return (dest);
}
