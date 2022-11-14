//Vector 3
//simple vector example

#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<string> sentence;
    
    cout << "Sentence size: " << sentence.size() << endl;
    
    sentence.push_back("Hello");
    sentence.push_back("how");
    sentence.push_back("are");
    sentence.push_back("you");
    sentence.push_back("?");            
    
    sentence.insert(sentence.begin()+1,"Paul");
    
    cout << endl;
    
    for(int x = 0; x < sentence.size(); x++)
       cout << sentence[x] << "  " ;
    cout << endl;
    
    
    cout << "sentence size: " << sentence.size() << endl;
    
    return 0;
}
