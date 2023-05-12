#include "ClassObjects.h"

int exampleInCpp()
{
	//Creating object
	Bar a, b;

	//Creating pointer to object
	Bar*c = new Bar;

	a.number = 2;
	b.number = 5;
	c->number = 9;

	printf("First object value %d\nSecond object value %d\nThird object value %d\n", a.number, b.number, c->number);

	//Removing objects
	delete(c);
	return 0;
}