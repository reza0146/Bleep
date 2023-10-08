#include <iostream>

#include "functions.hpp"

int main() {

    std::string text = "I sometimes eat broccoli. The interesting thing about broccoli is that there are four interesting things about broccoli.\n" 
    "Number One. Nobody knows how to spell it. \nNumber Two. No matter how long you boil it,"
    "it's always cold by the time it reaches your plate. \nNumber Three. It's green. #broccoli\n";

    std::string word = "broccoli";

    Bleep(text, word);

    std::cout << text;
    
    return 0;
}