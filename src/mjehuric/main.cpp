#include <iostream>
#include <sstream>
#include <string>
#include <vector>

void print_numbers(const std::vector<int> &numbers) {
    if (!numbers.size()) {
        std::cout << std::endl;
        return;
    }
    std::string out;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        out += std::to_string(numbers[i]) + " ";
    }
    out += std::to_string(numbers[numbers.size() - 1]);
    std::cout << out << std::endl;
}

void swap(std::vector<int> &numbers, int i, int j) {
    int tmp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = tmp;
}

void sort(std::vector<int> &numbers) {
    int count = numbers.size();
    int limit = numbers.size();
    while (count) {
        for (int i = 1; i < limit; ++i) {
            if (numbers[i - 1] > numbers[i]) {
                swap(numbers, i - 1, i);
                print_numbers(numbers);
            }
        }
        --limit;
        --count;
    }
}

int main() {
    std::string line;
    std::getline(std::cin, line, '\n');
    std::vector<int> numbers;
    std::stringstream stream(line);
    std::string n;
    while (stream >> n) {
        numbers.push_back(std::stoi(n));
    }

    sort(numbers);
    return 0;
}