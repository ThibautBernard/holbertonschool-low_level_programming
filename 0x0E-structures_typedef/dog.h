#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struc dog
 * @name: name of the dog
 * @age: age
 * @owner: owner of the dog
 * Description: a dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
