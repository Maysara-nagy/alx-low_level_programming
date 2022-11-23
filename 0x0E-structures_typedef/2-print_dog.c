#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function to printf dog
 * @d: the struct that i will print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->age == 0 || d->owner == NULL)
		{
			printf("nil");
		}
		else if (d->name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("%s\n", d->name);
			printf("%f\n", d->age);
			printf("%s\n", d->owner);
		}
	}
}
