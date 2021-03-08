#include "dog.h"
/**
 * init_dog - Prototype function
 * Decription: Initialize a varible of type struct dog
 * @d: Struct
 * @name: name of dog
 * @age: Age of dog
 * @owner: owner of dog
 * Return: Void
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
