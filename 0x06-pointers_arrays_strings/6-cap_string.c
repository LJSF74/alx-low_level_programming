#include "main.h"
/**
 * cap_string - capitalizes words of a str
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char w, c;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};

	while (*(s + i) != '\0')
	{
		w = *(s + i);
		for (j = 0 ; j < 13 ; j++)
		{
			if (w == sep[j])
			{
				c = *(s + i + 1);
				c = c - 32;
				*(s + i + 1) = c;
			}
		}
		i++;
	}
}
