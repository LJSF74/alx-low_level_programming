#include "main.h"
/**
 * main - default entry
 *
 * Return: 0
 */
int main(void)
{
	char c[] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n' };
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	return (0);
}
