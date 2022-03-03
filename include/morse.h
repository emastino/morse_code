#ifndef MORSE_H
#define MORSE_H
#include <map>

class morse
{
    public:
        morse(int); // constructor
        virtual ~morse(); // deconstructor
        int get_u_time();
        void play_letter(char);
        void play_string(std::string);

    protected:
        std::map<char, std::string> m;

    private:
        int u_time; // time of  a unit in ms
        int freq = 440;
};

#endif // MORSE_H
