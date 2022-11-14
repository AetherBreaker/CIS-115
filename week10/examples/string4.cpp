//string4.cpp
//some characteristics of strings...

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string line("The quick brown fox");
	string line2("Insert");
    
//	getline(cin, line);

	cout << line << endl;
	
// find characters in a string...
	
	cout << " 'abc' was found at position: " << line.find("abc") << endl;

// replacing characters in a string...

    line.replace(4, 5, "slow ");
    cout << "Replace example: " << line << endl;

    
// inserting characters in a string...

    line.insert(0, line2);
    
    cout << "Insert example: " << line << endl;	
    
    cout << endl << endl;
    
   string::const_iterator sIter = line.begin();    // string iterator	
   while(sIter != line.end())
   {  
        cout << *sIter;
        sIter++;
    }    
    
    cout << endl;
    

	return 0;

}
