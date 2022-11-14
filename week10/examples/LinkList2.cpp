// Linked List #2 Example
// same as linklist1.cpp, except the ListNodes are dynamically allocated
// and output is displayed.
#include<iostream>

using namespace std;

struct ListNode
{
       int value;
       ListNode* next;
};

typedef ListNode *ListNodePtr;
       
int main()            
{
    ListNodePtr Head;
    ListNodePtr Second;
    ListNodePtr Third;
    
    Head = new ListNode;
    Second = new ListNode;
    Third = new ListNode;
    
    Head->value = 5;
    Head->next = Second;
    
    Second->value = 10;
    Second->next = Third;
    
    Third->value = 15;
    Third->next = NULL;
    
    cout << "Head: " << Head->value << endl;
    cout << "Second: " << Second->value << endl;
    cout << "Third: " << Third->value << endl;
    
    return 0;
}
       
