#include "dog.h"
/**
 * new_dog - Prototype function
 * Description: Create a new Dog
 * @name: Name of New dog
 * @age: Age of New dog
 * @owner: Owner of New Dog
 * Return: NULL if function fails or new dog value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
/* derefernce new-dog */
	dog_t *new_dog;

/* make memory for new dog set to size of struct */
	new_dog = malloc(sizeof(dog_t));

/* If function fails, return NULL */
	if (new_dog == NULL)
		return (NULL);

	(new_dog)->name = malloc(sizeof(name) + 1);
	if (name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(new_dog)->owner = malloc(sizeof(owner) + 1);
	if ((new_dog)->owner == NULL)
	{
		free((new_dog)->name);
		free(new_dog);

		return (NULL);
	}

	_strcpy((new_dog)->name, name);
	_strcpy((new_dog)->owner, owner);
	(new_dog)->age = age;

	return (new_dog);

}

/**
 * _strcpy - Helper Function from previous proj
 * Description: Copy a string from src to dest
 * @dest: String to copy to
 * @src: source of the string
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
int h;

/* Run through the src string */
for (h = 0; src[h] != '\0'; h++)
{
dest[h] = src[h];
}

dest[h] = '\0';

/* return the dest pointer value */
return (dest);
}
