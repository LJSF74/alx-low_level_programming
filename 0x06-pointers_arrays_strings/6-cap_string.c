#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes words of a str
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[13] = {' ', '\t', '\n', ','
		, ';', '.', '!', '?', '\"',
		'(', ')', '{', '}'};

	while (i < strlen(s))
	{
		for (j = 0 ; j < 13 ; j++)
		{
			if (*(s + i) == sep[j])
			{
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z' )
					*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
		i++;
	}
	return (s);
}
