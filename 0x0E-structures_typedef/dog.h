#ifndef DOG_H
#define DOG_H
/**
 * dog_t - Typedef for the struct dog type.
 *
 * Description:
 * The `dog_t` typedef is used to create a new name
 * for the `struct dog` type.
 * This allows for easier and more readable declaration
 * of variables of type `struct dog
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
