#pragma once
#include <stdio.h>
#include <stdlib.h>

struct Foo
{
	//float (*calculate_percentage)(int a,int b);
	void (*Method)();
};

void Method() {
	printf("Method \"connected\" to struct\n");
}

void baseFunction()
{
	printf("Base function\n");
}

void overrideFunction()
{
	printf("Base function has been override!\n");
}
#define OVERRIDE 0

#ifdef OVERRIDE
#define baseFunction(x) overrideFunction(x)
#endif
void exampleInC();