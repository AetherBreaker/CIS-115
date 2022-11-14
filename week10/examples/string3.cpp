//string3.cpp  Entering a string and printing them backwards.

#include<iostream>
#include<string>

using namespace std;

int main()
{

	//	all characters used as word seperators are defined in 
	//  a special string constant...

	const string delims(" ");

	string line;


	// The function getline() is a special function to read 
	// input from streams into a string.  It reads every 
	// character up to the next end-of-line. 
	
	// Inside the outer loop, the individual words are searched
	// and printed.  
	
	cout << "Enter a string... " << endl;

	while(getline(cin,line))
	{
		string::size_type begIdx, endIdx;

		// searched for the beginning of the first word.

		begIdx = line.find_first_not_of(delims);

		// this loop iterates as long as the beginning of a word
		// can be found.

		while(begIdx != string::npos)
		{

			// search for the end of the actual word.
			endIdx = line.find_first_of(delims, begIdx);

			if(endIdx == string::npos)
			{
				endIdx = line.length();
			}

			for(int i = endIdx - 1; i >= static_cast<int>(begIdx); --i)
			{
				cout << line[i];
			}
			cout << ' ' ;

			// now reinitialize begIdx to the beginning of the next word.
			begIdx = line.find_first_not_of(delims, endIdx);
		}

		cout << endl;
	}

	return 0;
}
