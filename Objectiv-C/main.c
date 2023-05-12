#include <stdio.h>

struct MyStruct
{
	int a;
};


int main()
{
	struct MyStruct a;
	a.a = 5;
	printf("xd, %d", a.a);
}