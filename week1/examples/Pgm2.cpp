// Pgm2.cpp
// Example using cin and cout with 
// the stream insertion / extraction operators
// Stream INSERTION <<
// Stream EXTRACTION >>
// Discussion on clearing input buffers

#include<iostream>

int x;						//Create/Instantiate int x

int main()
{
	std::cout << "Enter a Number: ";
	
	std::cin >> x;				//waits for the user - prompt
							//cin => input stream object
							//entered value extracted from the	
							//input stream into the variable x

	std::cout << std::endl;

	std::cout << "You entered " << x << std::endl;
	
	return 0;

}
