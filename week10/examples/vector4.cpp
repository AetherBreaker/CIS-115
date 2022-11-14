// vector_a.cpp
// an example of a simple usage of vectors.
//
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	// create empty vector for strings

	vector<string>  v(5);


	for(int x = 0; x < 5; x++)
	   v[x] = "Vector Element " ;

	
	for(int x = 0; x < 5; x++)
	  cout << v[x] << ' ' ;

	return 0;

}

