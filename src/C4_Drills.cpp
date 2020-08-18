#include <iostream>

void SizeOfTypes();

void Chapter4Drills()
{
	SizeOfTypes();
}

void SizeOfTypes()
{
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	std::cout << "long long int: " << sizeof(long long int) << std::endl;
}