// Two Dimensional Array
// An example of initializing a two dimensional array using a nested loop

#include <iostream>

using namespace std;

int ary [4][10];            //2 dimensional 4x10 array
                            //4 rows, 10 columns.

int main()
{
    for(int x = 0; x < 4; x++)              //outside for loop => row
    {
        for(int y = 0; y < 10; y++)         //inside for loop => column
        {
            ary[x][y] = y;
        }    
    }
    
    for(int x = 0; x < 4; x++)
    {
        for(int y = 0; y < 10; y++)
        {
            cout << ary[x][y] << ' ';
        }    
        cout << endl;
    }
    
    return 0;
}
