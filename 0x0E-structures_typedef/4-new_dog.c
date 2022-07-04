#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - returns leng of string
 * @s: string
 * Return: leng of s
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - copies string pointed by src
 * @dest: pointer to buffer where we copy string
 * @src: string to be copied
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int leng, a;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (a = 0; a < leng; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - new dog to e created
 * @name: member of dog
 * @age: member of dog
 * @owner: member of dog
 * Return: NULL if func fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

