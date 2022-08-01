#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure definition about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Author: Chimezie Onwudiwe
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Type definition for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
