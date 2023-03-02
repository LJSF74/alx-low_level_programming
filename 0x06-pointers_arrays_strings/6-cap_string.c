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

	while (s[i])
	{
		if (s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
