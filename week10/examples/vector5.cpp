// vector5.cpp
// an example of a simple usage of vectors.
//
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	//create an empty vector for strings with 5 elements...

	vector<string>  v(5);
    //vector<string>  v1(5);

	for(int x = 0; x < 5; x++)
	   v[x] = "v Element " ;
	   
    //create v1 and initialize it with the contents of v
	   
    vector<string> v1 = v;
    
    // add an element to the end of v1
    
    v1.push_back("v1 Element ");

    // output the contents of v
	
	for(int x = 0; x < 5; x++)
	  cout << v[x] << endl ;
	  
    cout << endl;
	  
    // output v1 using the at function
	
	for(int x = 0; x < 6; x++)
	  cout << v1.at(x) << endl ;	  

	return 0;

}

