#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialises a variable of type "struct dog"
 *
 * Return: nothing (void)
 *
 * @d: pointer to struct dog to be initalised
 * @name: name to be initialised
 * @age: age to be initialised
 * @owner: owner to be initialised
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
