#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - creates new dog var
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: ndog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(*ndog));
	char *nn = name;
	char *no = owner;

	if (name == NULL || owner == NULL)
	{
		free(ndog);
		return (NULL);
	}
	(*ndog).name = nn;
	(*ndog).age = age;
	(*ndog).owner = no;
	return (ndog);
}
