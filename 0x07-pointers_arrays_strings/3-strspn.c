#include "main.h"
/**
 * _strspn - counts num of bytes of accept that are in s
 * @s: string
 * @accept: chars to check
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned long int i, j;
	unsigned int n = 0;

	for (i = 0 ; i < sizeof(s) ; i++)
	{
		for (j = 0 ; j < sizeof(accept) ; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}
	return (n);
}
