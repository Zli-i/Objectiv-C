#include "C.h"

void overloadInt(int x)
{
	printf("Overloaded with int variable %d", x);
}

void overloadFloat(float x)
{
	printf("Overloaded with float variable %f", x);
}

#define overload(x) _Generic ((x), int: overloadInt, float: overloadFloat)(x)

void exampleInC()
{
	//Example of methods in C
	struct Foo foo;

	foo.Method = Method;

	foo.Method();

	//Example of overloading in C
	int a = 5;
	float b = (float)3.2;

	//this is working in online comipiler why? 
	//overload(a);
	//overload(b);

	//Example of overriding in C
	baseFunction();
}