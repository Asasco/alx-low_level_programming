#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: pointer to struct.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (ni1)\n");
		else
			print("name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("owner: (ni1)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
