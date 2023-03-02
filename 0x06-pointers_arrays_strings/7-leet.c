#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char c1[] = {'a', 'e', 'o', 't', 'l'};
	char c2[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0 ; j < 4 ; j++)
		{
			if (s[i] == c1[j] ||
				s[i] == c2[j])
				{
					s[i] = n[j];
				}
		}
		i++;
	}
	return (s);
}
