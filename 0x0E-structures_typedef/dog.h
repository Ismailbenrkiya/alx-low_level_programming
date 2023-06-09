#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: (cm-amos)Amos Mwongela
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(const dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
