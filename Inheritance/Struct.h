#include <stdio.h>

struct Foo
{
	int a;
};

struct Bar
{
	int b;
};

struct Quux
{
	struct Foo foo;
	int c;
};

struct Baz
{
	struct Foo foo;
	struct Bar bar;
	int d;
};

void exampleInC();