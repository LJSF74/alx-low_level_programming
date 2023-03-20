#ifndef DOG
#define DOG
/**
 * struct dog - dog characteristics
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef MAIN_HEADER
#define MAIN_HEADER
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
