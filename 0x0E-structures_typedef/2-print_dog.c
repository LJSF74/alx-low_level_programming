#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints elems of dog struct
 * @d: dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *n;
	char *o;

	if (d)
	{
		n = (*d).name == NULL ? "(nil)" : (*d).name;
		printf("Name: %s\n", n);
		printf("Age: %f\n", (*d).age);
		o = (*d).owner == NULL ? "(nil)" : (*d).owner;
		printf("Owner: %s\n", o);
	}
}
