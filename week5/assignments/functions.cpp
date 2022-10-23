// functions
// Jacob Ogden

#include <iostream>

using namespace std;

int callCount = 0;

void myprint(char input[])
{
    callCount++;
    for (
        int x = 0;
        x < callCount;
        x++
        )
    {
        for (
            int index = 0;
            input[index] != 0;
            index++
            )
        {
            cout << input[index];
        }
        cout << endl;
    }
}
void myprint(char input[], int iter)
{
    callCount++;
    if (iter > 0)
    {
        for (int x = 0; x < iter + callCount; x++)
        {
            for (
                int index = 0;
                input[index] != 0;
                index++
                )
            {
                cout << input[index];
            }
            cout << endl;
        }
    }
}


int main()
{
    char mystring[] = "this is definitely a string";
    myprint(mystring);
    cout << endl;

    myprint(mystring, 3);
    cout << endl;

    myprint(mystring);
    cout << endl;

    myprint(mystring, 3);
    cout << endl;

    return 0;
}