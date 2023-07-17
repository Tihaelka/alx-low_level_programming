#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * init_dog - Initialise une structure de chien
 * avec les valeurs spécifiées
 * @d: Pointeur vers la structure de chien à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 * Description :
 * La fonction init_dog initialise une structure
 * de chien avec les valeurs spécifiées
 * pour le nom, l'âge et le propriétaire.
 * Elle met à jour les champs de la structure
 * à l'aide du pointeur fourni.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
