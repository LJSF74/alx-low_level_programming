#include "main.h"
#include <stdio.h>
/**
 * main - prints the program name
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if(argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
