#include <stddef.h>
#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - DÃcrit un chie
 * @name: nom
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
