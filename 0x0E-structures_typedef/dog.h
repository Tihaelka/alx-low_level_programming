#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog with its attributes
 * @name: The name of the dog (string)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (string)
 *
 * Description:
 * The struct dog represents a dog with its name, age, and owner's name.
 * It is used to store information about a specific dog.
 */
struct dog
{
	char  *name;
	float age;
	char  *owner;
} dog;
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif


