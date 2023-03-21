#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
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

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	(*ndog).name = malloc(strlen(name) + 1);
	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	(*ndog).owner = malloc(strlen(owner) + 1);
	if ((*ndog).owner == NULL)
	{
		free((*ndog).name);
		free(ndog);
		return (NULL);
	}
	strcpy((*ndog).name, name);
	(*ndog).age = age;
	strcpy((*ndog).owner, owner);
	return (ndog);
}
