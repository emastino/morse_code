#include <iostream>
#include <string>
#include <windows.h> // WinApi header
#include "morse.h"


int main()
{

    morse m(200);

    std::cout << "Enter a string: " ;
    std::string s ;
    getline (std::cin, s);
    std::cout << "Your string was:" << s << "\n";
    // play code
    m.play_string(s);

    return 0;
}
