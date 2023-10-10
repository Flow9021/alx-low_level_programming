#ifndef INIT_DOG_H
#define INIT_DOG_H

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#endif
