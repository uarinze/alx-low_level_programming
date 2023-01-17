#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable
 * of type struct dog
 * @d: first argument
 * @name: second argument
 * @age: third argument
 * @owner: fourth argument
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
