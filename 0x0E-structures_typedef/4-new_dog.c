#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
*new_dog - prints new dog
*@name: dog name
*@age: dog age
*@owner: owner of the dog
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, nlen, olen;

	struct dog *n_dog = NULL;

	nlen = 0;
	while (name[nlen] != '\0')
		nlen++;
	olen = 0;
	while (ownder[olen] != '\0')
		olen++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->name = malloc(nlen + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(olen + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		n_dog->name[i] = name[i];

	for (i = 0; i < olen; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}

