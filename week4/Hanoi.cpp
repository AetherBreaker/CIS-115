// hanoi.cpp
// The Towers of Hanoi Solution Program
// Take some time to look over the code, and understand 
// how it works...

#include <iostream>

using namespace std;
int x;
int steps = 0;

void towers( int, int, int, int );

int main()
{
   int nDisks;
   
   cout << "Enter the starting number of disks: ";
   cin >> nDisks;
   towers( nDisks, 1, 3, 2 );

     return 0;
}  

void towers( int disks, int start, int end, int temp )         // #Disks, Start Tower#, End Tower#, Temp Tower#)
{
   steps++;	

   if ( disks == 1 ) {
	   cout << start << " --> " << end << "  last disk moved. Step: " << steps << endl;
      return;
   }   
	

   // move disks - 1 disks from start to temp
   towers( disks - 1, start, temp, end );

   // move last disk from start to end
   cout << start << " --> " << end << " start to end. Step: " << steps << endl;

   // move disks - 1 disks from temp to end
   towers( disks - 1, temp, end, start );
}  
