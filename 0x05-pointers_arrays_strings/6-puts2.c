#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other char of str
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", *(str + i));
		}
		i++;
	}
}
