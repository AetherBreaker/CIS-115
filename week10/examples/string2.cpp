
//string2.cpp  String handling using string class objects.
//examples of various string functions

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void string_stats(string);
void find_string(string, char);

char inChar;
char testChar;

int main()
{
	string pname;
	string qname;

	pname = "C++ is fun";

	string_stats(pname);

	pname.erase();

	string_stats(pname);

	pname = "C++ is fun";

	pname.replace((pname.find("fun")),3,"NOT");

	pname.replace((pname.find("C++")),3," VB");

	cout << pname << endl;

	string_stats(pname);

	pname.append("!!");

	string_stats(pname);

	cout << "Enter a Character: ";

	cin >> testChar;

	find_string(pname, testChar);

	
	pname = "C++ is fun";

	cout << pname << endl;

	pname = "abcdefghijklmnopqrstuvwxyz";

	//iterator example

	string::iterator pos;

	for(pos = pname.begin(); pos != pname.end(); pos++)
		cout << *pos;

	cout << endl;

	reverse(pname.begin(),pname.end());

	cout << pname << endl;

	sort(pname.begin(),pname.end());

	cout << pname << endl;
    
	return 0;
}

void string_stats(string inString)
{
	cout << "Contents of pname: " << inString << endl;

	cout << "Size of pname is " << inString.size() << endl;

	// Capacity is the number of characters that a string can
	// contain without having to reallocate its internal memory.

	cout << "Capacity of pname is " << inString.capacity() << endl;

	// max_size returns the max number of characters that a string
	// may contain.

	cout << "max_size of pname is " << inString.max_size() << endl;

	if(inString.empty())
		cout << "The string is empty." << endl;
	else
		cout << "The string is NOT empty." << endl;

	cout << endl;
}

void find_string(string testStr, char test)
{
	if(testStr.find(test) == testStr.npos)
	{
		cout << "char -" << test << "- is not found";
	}
	else
	{
		cout << testStr << endl;
		cout << "char " << test << " can be found at position " << testStr.find(test);
	}

	cout << endl;

}
