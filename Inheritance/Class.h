#pragma once
#include <iostream>

class CppFoo
{
public:
	int a;
};

class CppBar
{
public:
	int b;
};

class CppQuux : public CppFoo
{
public:
	int c;
};

class CppBaz : public CppFoo, public CppBar
{
public:
	int d;
};

void exampleInCpp();