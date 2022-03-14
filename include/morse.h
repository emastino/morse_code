#ifndef MORSE_H
#define MORSE_H
#include <map>

class morse
{
    public:
        morse(); // constructor
        virtual ~morse(); // deconstructor
        void play_letter(char);
        void play_string(std::string);

    protected:
        std::map<char, std::string> m;

    private:

};

#endif // MORSE_H
