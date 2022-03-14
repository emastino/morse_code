#include <iostream>
#include <string>
#include <windows.h> // WinApi header
#include <mmsystem.h>
#include "morse.h"


int main()
{
    morse m;

    std::cout << "Enter a string: " ;
    std::string s ;
    getline(std::cin, s);

    // play code
    m.play_string(s);


    return 0;
}
