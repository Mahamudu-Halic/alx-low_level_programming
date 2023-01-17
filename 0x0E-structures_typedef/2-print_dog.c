/**
 *print_dog - prints a struct dog
 *d: dog class variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return 0;
	(d->name == NULL ? printf("Name: (nil)") : printf("Name: %s\n", d->name));
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner);
}
