#include "main.h"
/**
 * _islower - returns 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	char i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (c == i){
			return (0);
		}
	}
	return (1);
}
