#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * main - calculator
 * @argc: arg num
 * @argv: arg array
 * Return: 0 or something else
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!((*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3]))))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 ||
			strcmp(argv[2], "%") == 0) &&
			strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
