#include <stdio.h>
/**
 * main - default entry
 * 
 * Return: 0
 */
int main(void) {
	char i;
	for ( i = '0'; i <= '9'; i++)
	{
		putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
