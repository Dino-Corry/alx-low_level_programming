#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - dog details
 * @name: the name of the dog
 * @age: dog age
 * @owner: dog owners
 *
 * Description: Omo abeg description here biko
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H_*/
