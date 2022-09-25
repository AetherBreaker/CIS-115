// Pgm3.cpp
// Variable Examples
// Examples using the sizeof keyword and 
// declaring variables of different types.

#include<iostream>

int main()
{
	char y;
	int x;
	float z;
	long a;
	double b;

	std::cout << "Size of char is   " << sizeof(y) << std::endl;
	std::cout << "Size of int is    " << sizeof(x) << std::endl;
	std::cout << "Size of float is  " << sizeof(z) << std::endl;
	std::cout << "Size of long is   " << sizeof(a) << std::endl;
	std::cout << "Size of double is " << sizeof(b) << std::endl;

	std::cin.get();


	return 0;
}
