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
	dog_t *ndog;
	char *nn = name == NULL ? "" : name;
	char *no = owner == NULL ? "" : owner;

	ndog = malloc(sizeof(*ndog));
	if (ndog == NULL)
	{
		free(ndog);
		return(NULL);
	}
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	(*ndog).name = nn;
	(*ndog).age = age;
	(*ndog).owner = no;
	return (ndog);
}
