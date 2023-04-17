#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints astructure with the name dog
 * @d: ponits to the structure doge
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil\n");
		if (d->name != '\0')
			printf("Age: %d\n", d->age);
		else
			printf("Age: nill\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("owner: nil\n");
	}
}
