#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates n bytes of src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = strlen(src);
	int k = 0;

	while (k < n)
	{
		*(dest + i) = *(src + k);
		i++;
		k++;
	}
	return dest;
}
