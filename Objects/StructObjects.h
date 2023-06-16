#pragma once
#include <stdio.h>
#include <stdlib.h>



struct Foo
{
	int number;
};

struct Foo* FooConstructor()
{
	struct Foo* a = (struct Foo*)malloc(sizeof(struct Foo));
	a->number = 0;
	return a;
}

void FooDeconstructor(struct Foo* p)
{
	free(p);
}

int exampleInC();