// Pgm1.cpp   - Your First C++ Progam 		
// (These are Comment Lines)

#include<iostream>			// Preprocessor Directive
							// Includes the iostream header file
							// (used for cout and endl functions

int main()					// beginning of function main
							// int => returns an integer value
							// upon completion
							// main => name of function
							// () => parameter list (empty)

{							// opening brace for function body

	std::cout << "Programming is Fun!" << std::endl;	
	
							// std:cout => standard output device
							// << => stream insertion operator 
							// literal string
							// << => another insertion operator
							// std:endl => end of line (aka enter)
							// ; => semi colon = end of statement

    std::cin.get();                          // this function waits for some keyboard
							// input and the enter key to be pressed.

	return 0;					// return value = 0;
}							// closing brace = end of body.
