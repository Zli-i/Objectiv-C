#include "StaticInC.h"

int static staticInt = 5;

static void printfStatic()
{
	printf("Static function in C\n");
}

void exampleInC()
{
	printf("Static variable from C example %d\n", staticInt);
	printfStatic();
}