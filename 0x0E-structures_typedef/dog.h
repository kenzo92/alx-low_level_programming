#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This contains the properties of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: This structure returns the details that pertains to a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *src);
void str_free(char *str);
void free_dog(dog_t *d);

#endif
