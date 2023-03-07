#include "main.h"
#include <string.h>
/**
 * _strspn - counts num of bytes of accept that are in s
 * @s: string
 * @accept: chars to check
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
