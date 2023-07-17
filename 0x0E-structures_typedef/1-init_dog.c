#ifndef DOG_H
#define DOG_H

/**
 * init_dog - Initializes a dog structure with the specified values
 * @d: Pointer to the dog structure to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description:
 * The function initializes a dog structure with the specified values
 * for name, age, and owner. It updates the fields of the structure using the
 * provided pointer.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->age = age;
    d->owner = owner;
}

#endif

