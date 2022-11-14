// Linked List #1 Example.

#include<iostream>

using namespace std;

struct ListNode
{
       int value;
       ListNode* next;
};

       ListNode *ListNodePtr1;                      // Create 3 ListNode Pointers
       ListNode *ListNodePtr2;       
       ListNode *ListNodePtr3;
       
int main()            
{
    ListNode Head;    
    ListNodePtr1 = &Head;                           // Point each Node Pointer to its ListNode
    ListNode Second;
    ListNodePtr2 = &Second;
    ListNode Third;
    ListNodePtr3 = &Third;
    
    ListNodePtr1->value = 5;                            // Assign value to each ListNode and
    ListNodePtr1->next = &Second;                 // point its pointer to the next downstream pointer.  
    
    ListNodePtr2->value = 10;
    ListNodePtr2->next = &Third;
    
    ListNodePtr3->value = 15;
    ListNodePtr3->next = NULL;
    
    return 0;
}
       
