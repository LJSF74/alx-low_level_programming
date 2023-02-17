#include <stdio.h>
/**
 * main - default entry
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i != 'z' + 1 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}
