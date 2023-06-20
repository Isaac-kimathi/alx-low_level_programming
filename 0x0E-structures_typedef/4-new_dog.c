#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogx;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogx = malloc(sizeof(dog_t));
	if (dogx == NULL)
		return (NULL);

	dogx->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogx->name == NULL)
	{
		free(dogx);
		return (NULL);
	}

	dogx->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogx->owner == NULL)
	{
		free(dogx->name);
		free(dogx);
		return (NULL);
	}
	dogx->name = _strcopy(dogx->name, name);
	dogx->age = age;
	dogx->owner = _strcopy(dogx->owner, owner);

	return (dogx);
}
/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int lgth = 0;

	while (*str++)
		lgth++;

	return (lgth);
}
/**
 * _strcopy - Copies a string pointed to by src, including the
 *           terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int idx = 0;

	for (; src[idx]; idx++)
		dest[idx] = src[idx];

	dest[idx] = '\0';

	return (dest);
}

