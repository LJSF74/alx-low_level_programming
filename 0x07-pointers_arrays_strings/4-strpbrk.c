#include "main.h"
#include <string.h>
/**
 * _strpbrk - returns first occurence of chars if accept in s
 * @s: string to scan
 * @accept: chars to be scanned
 * Return: st
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
