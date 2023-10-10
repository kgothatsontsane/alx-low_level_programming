#inlcude < stdio.h >
#inlcude < stdlib.h >
#include <dog.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to struct dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	prinf("Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
