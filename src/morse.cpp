#include <iostream>
#include <string>
#include <windows.h> // WinApi header
#include <map>
#include "morse.h"


morse::morse(int t)
{
    //ctor

    // set the base unit time
    this->u_time = t;

    // create the map relating characters
    // dits are = 0
    // dahs are = 1
    // between dits and dahs are - silence that lasts q unit of time

    m['A'] = "0-1";
    m['a'] = "0-1";

    m['B'] = "1-0-0-0";
    m['b'] = "1-0-0-0";

    m['C'] = "1-0-1-0";
    m['c'] = "1-0-1-0";

    m['D'] = "1-0-0";
    m['d'] = "1-0-0";

    m['E'] = "0";
    m['e'] = "0";

    m['F'] = "0-0-1-1-0";
    m['f'] = "0-0-1-1-0";

    m['G'] = "1-1-0";
    m['g'] = "1-1-0";

    m['H'] = "0-0-0-0";
    m['h'] = "0-0-0-0";

    m['I'] = "0-0";
    m['i'] = "0-0";

    m['J'] = "0-1-1-1";
    m['j'] = "0-1-1-1";

    m['K'] = "1-0-1";
    m['k'] = "1-0-1";

    m['L'] = "0-1-0-0";
    m['l'] = "0-1-0-0";

    m['M'] = "1-1";
    m['m'] = "1-1";

    m['N'] = "1-0";
    m['n'] = "1-0";

    m['O'] = "1-1-1";
    m['o'] = "1-1-1";

    m['P'] = "0-1-1-0";
    m['p'] = "0-1-1-0";

    m['Q'] = "1-1-0-1";
    m['q'] = "1-1-0-1";

    m['R'] = "0-1-0";
    m['r'] = "0-1-0";

    m['S'] = "0-0-0";
    m['s'] = "0-0-0";

    m['T'] = "1";
    m['t'] = "1";

    m['U'] = "0-0-1";
    m['u'] = "0-0-1";

    m['V'] = "0-0-0-1";
    m['v'] = "0-0-0-1";

    m['W'] = "0-1-1";
    m['w'] = "0-1-1";

    m['X'] = "1-0-0-1";
    m['x'] = "1-0-0-1";

    m['Y'] = "1-0-1-1";
    m['y'] = "1-0-1-1";

    m['Z'] = "1-1-0-0";
    m['z'] = "1-1-0-0";

    m[' '] = "-------";


}

morse::~morse()
{
    //dtor
}


int morse::get_u_time()
{
    return morse::u_time;
}

void morse::play_letter(char c)
{

    std::string s = m[c];
    std::cout << "Playing the letter " << s << "\n";

    for(unsigned int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0')
        {
            Beep(freq, u_time);
        }
        else if(s[i] == '1')
        {
            Beep(freq, 3*u_time);
        }
        else
        {
            Sleep(u_time);
        }

    }
}


void morse::play_string(std::string str)
{

    for(unsigned int i = 0; i < str.length(); i++)
    {
        play_letter(str[i]);
        Sleep(3*u_time);
    }
}
