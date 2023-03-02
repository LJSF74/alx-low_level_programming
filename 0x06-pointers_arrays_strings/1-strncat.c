#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n bytes of src to dest
 * @dest: destination
 * @src: source
 * @n: num of bytes to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = strlen(src);
	int k = 0;

	if (n <= j)
	{
		while (k < n)
		{
			*(dest + i) = *(src + k);
			i++;
			k++;
		}
	}
	else
	{
		while (k < j)
		{
			*(dest + i) = *(src + k);
			i++;
			k++;
		}
	}
	return (dest);
}
