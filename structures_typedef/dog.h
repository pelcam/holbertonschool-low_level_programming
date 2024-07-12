#ifndef DOG_H
#define DOG_H

#include <stddef.h>
/**
 * struct dog - A structure to represent a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
