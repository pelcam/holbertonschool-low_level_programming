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

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: The name to set
 * @age: The age to set
 * @owner: The owner to set
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
