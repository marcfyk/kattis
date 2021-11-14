#include <iostream>
#include <stdio.h>

int main() {
    char buffer[100];
    std::string word;
    std::cin >> word;
    const char *word_chars = word.c_str();
    std::sprintf(buffer, "%s %s %s\n", word_chars, word_chars, word_chars);
    std::cout << buffer;
    return 0;
}
