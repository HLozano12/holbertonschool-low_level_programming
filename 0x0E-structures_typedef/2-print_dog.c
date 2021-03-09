#include "dog.h"
/**
 * print_dog - Prototype function
 * Decription: print a struct dog
 * @d: Struct variable
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
/* If d is NULL print nothing */
	if (d == NULL)
		return;

/* If an element of d is NULL, print (nil) */
	if (d->name == NULL)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);

}
