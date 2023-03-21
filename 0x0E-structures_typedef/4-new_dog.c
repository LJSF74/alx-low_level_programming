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

	ndog = malloc(sizeof(*ndog));
	if (ndog == NULL)
	{
		free(ndog);
		return(NULL);
	}
	if (name == NULL || age < 0 || owner == NULL)
	{
	    free(ndog);
		return (NULL);
	}
	(*ndog).name = malloc(strlen(name) + 1);
	if ((*ndog).name == NULL)
	    return (NULL);
	(*ndog).owner = malloc(strlen(owner) + 1);
	if ((*ndog).owner == NULL)
	    return (NULL);
	strcpy((*ndog).name, name);
	(*ndog).age = age;
	strcpy((*ndog).owner, owner);
	return (ndog);
}
