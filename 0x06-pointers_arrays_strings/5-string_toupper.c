#include "main.h"
#include <string.h>
/**
 *
 */
char *string_toupper(char *c)
{
	int i = 0;
	char n;

	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			n = *(c + i);
			n = n - 32;
			*(c + i) = n;
		}
		i++;
	}
	return (c);
}
