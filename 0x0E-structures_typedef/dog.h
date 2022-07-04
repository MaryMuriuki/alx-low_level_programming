#ifndef DOGGO_H
#define DOGGO_H

/**
 * struct dog - dog's basic info
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Description: lengthier desc
 */
struct dog
{
	char *owner;
	float age;
	char *name;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
