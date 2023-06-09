#include "StructObjects.h"



int exampleInC()
{
	//Creating object
	struct Foo a, b;

	//Creating pointer to object
	struct Foo* c = (struct Foo*)malloc(sizeof(struct Foo));

	//Assigning values to objects
	a.number = 2;
	b.number = 5;
	c->number = 9;

	printf("First object value %d\nSecond object value %d\nThird object value %d\n", a.number, b.number, c->number);

	struct Foo* d = FooConstructor();

	printf("Example of constructor in C\nValue from constructor: %d\n", d->number);

	FooDeconstructor(d);
	//Removing objects
	free(c);
	return 0;
}