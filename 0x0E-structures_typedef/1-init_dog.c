#include "dog.h"

/**
 * init_dog - initialize  a variablr of type struct dog
 *
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns (0)
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
