
#include <stdio.h>
#include <iostream>

// function to stream an inputted unicode character to the console
void streamUnicodeChar(wchar_t c) {
    std::wcout << c;
}



int wmain() {

    std::wcout << L'\u2500' << std::endl;
    system("pause");
    return 0;

}
