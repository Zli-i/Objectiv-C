#pragma once
#include <stdio.h>
#include <stdlib.h>

struct Foo
{
	void (*Method)();
};

void Method() {
	printf("Method \"connected\" to struct\n");
}
#define OVERRIDE 0

void baseFunction()
{
	printf("Base function\n");
}

void overrideFunction()
{
	printf("Base function has been override!\n");
}

#ifdef OVERRIDE
#define baseFunction(x) overrideFunction(x)
#endif



void exampleInC();