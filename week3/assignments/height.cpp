
#include <iostream>
#include <format>

using namespace std;

int heightinput;
int heightinfeet;
int remainderinchesmod;
int remainderinchesformula;

int const IPF = 12;

int main()
{
    cout << "Input your height in inches: " << endl;
    cin >> heightinput;

    heightinfeet = heightinput / IPF;
    remainderinchesmod = heightinput % IPF;
    remainderinchesformula = heightinput - (heightinfeet * IPF);

    cout << "Modulus: Your height is: " << heightinfeet << "'" << remainderinchesmod << '"' << endl;
    cout << "Formula: Your height is: " << heightinfeet << "'" << remainderinchesformula << '"' << endl;
    return 0;
}