#include "main.h"
#include <string.h>
/**
 * _strstr - locates substring
 * @haystack: string to be scanned
 * @needle: char to find
 * Return: c
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
