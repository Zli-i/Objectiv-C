#include "Class.h"

void exampleInCpp()
{
	CppQuux dervied;

	dervied.a = 5;
	dervied.c = 8;

	std::cout << "Dervied class CppQuux have its own variable c: "<< dervied.c << ",\nand inherited variable a: " << dervied.a 
		<< " from class CppFoo" << std::endl;
	//std::cout << "Dervied class CppQuux have its own variable c: %d,\nand inherited variable a: %d" << std::endl;

	std::cout << std::endl;

	CppBaz multiDervied;

	multiDervied.a = 5;
	multiDervied.b = 2;
	multiDervied.d = 1;

	std::cout << "Dervied class CppBaz have its own variable d: " << multiDervied.d << std::endl 
		<< "and inherited variable a: "<< multiDervied.a <<" and b: " << multiDervied.b << " from class CppFoo and CppBar" << std::endl;
	//std::cout << "Dervied class CppBaz have its own variable d: %d,\nand inherited variable a: %d and b: %d" << std::endl;
}