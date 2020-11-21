#include <iostream>
#include <string>

int main() {
    std::string line;
    getline(std::cin, line);

    int in_size = line.length();
    int out_size = 2 * (in_size - 2) + 2;

    char out[out_size + 1];

    int ptr = 0;

    out[ptr++] = line[0];

    for (int i = 1; i < in_size - 1; ++i)
        out[ptr++] = line[i]; 

    for (int i = 1; i < in_size - 1; ++i)
        out[ptr++] = line[i]; 

    out[ptr++] = line[in_size - 1];
    out[ptr] = '\0';

    std::cout << std::string(out);

    return 0;
}

