#include<stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to namemof the dog
 * @age: the age of the dog
 * @owner: the pointer to the owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nd, no, j;
	dog_t *dog;
if (name == NULL || owner == NULL)
	return (NULL);
dog = malloc(sizeof(dog_t));

if (dog == NULL)
	return (NULL);
for (nd = 0; name[nd]; nd++)
	;
nd++;
dog->name = malloc(nd *sizeof(char));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
for (j = 0; j < nd; j++)
dog->name[j] = name[j;
dog->age = age;
for (no = 0; owner[no]; no++)
;
no++;
dog->owner = malloc(no *sizeof(char));
if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
for (j = 0; j < no; j++)
dog->owner[j] = owner[j];
return (dog);
}
