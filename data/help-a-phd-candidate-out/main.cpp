#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        std::string line;
        std::cin >> line;

        if (line == "P=NP") {
            std::cout << "skipped" << std::endl;
        } else {
            int index = line.find('+');
            int a = std::stoi(line.substr(0, index));
            int b = std::stoi(line.substr(index + 1, line.length()));
            std::cout << a + b << std::endl;
        }
    }

    return 0;
}