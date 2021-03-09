#include "dog.h"
/**
 * free_dog - function prototype
 * Description: Free the Dog-o
 * @d: Puppies
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
	}
}
