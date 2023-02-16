#include <stdio.h>
/**
 * main - main funct
 *
 * Return: 1
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(ch, 1, 59, stderr);
	return (1);
}
