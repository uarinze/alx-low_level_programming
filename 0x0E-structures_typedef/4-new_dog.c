#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - finds length of string
 * @str: string 
 *
 * Return: returns the length
 */
int _strlen(char *str)
{
	int i;
	int len = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		len++;
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 *
 * Return: the new string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dg;

	dg = malloc(sizeof(dog_t));
	if (dg == NULL)
		return (NULL);

	dg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dg->name == NULL)
	{
		free(dg);
		return (NULL);
	}
	dg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dg->owner == NULL)
	{
		free(dg->owner);
		return (NULL);
	}

	dg->name = _strcpy(dg->name, name);
	dg->age = age;
	dg->owner = _strcpy(dg->owner, owner);
	return (dg);
}
