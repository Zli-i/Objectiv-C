#include "StaticInCpp.h"

int static staticInt = 8;

static void printfStatic()
{
	printf("Static function in Cpp\n");
}

void exampleInCpp()
{
	printf("Static variable from Cpp example %d\n", staticInt);
	printfStatic();
}