#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct that represents a dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
