#include "functions.hpp"

void Asterisk(std::string &txt, std::string word, int i) {

    for (int j = 0; j < word.size(); j++) {
        txt[i - 1 - j] = '*';
    }
}

void Bleep(std::string &txt, std::string word) {

    int word_i = 0;

    for (int txt_i = 0; txt_i <= txt.size() - word.size(); txt_i++) {

        word_i = 0;   

        while (txt[txt_i] == word[word_i] && word_i < word.size()) {
            word_i++;
            txt_i++;
        }

        if (word_i == word.size()) {
            Asterisk(txt, word, txt_i);
        }

        if (word_i > 0) {
            txt_i--;
        }
    }

}