#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(1, '\n');
    std::unordered_map<char, std::string> map{
        {' ', "0"},
        {'a', "2"},
        {'b', "22"},
        {'c', "222"},
        {'d', "3"},
        {'e', "33"},
        {'f', "333"},
        {'g', "4"},
        {'h', "44"},
        {'i', "444"},
        {'j', "5"},
        {'k', "55"},
        {'l', "555"},
        {'m', "6"},
        {'n', "66"},
        {'o', "666"},
        {'p', "7"},
        {'q', "77"},
        {'r', "777"},
        {'s', "7777"},
        {'t', "8"},
        {'u', "88"},
        {'v', "888"},
        {'w', "9"},
        {'x', "99"},
        {'y', "999"},
        {'z', "9999"}};

    std::string out;

    for (int i = 1; i <= N; ++i) {
        out += "Case #" + std::to_string(i) + ": ";
        std::string line;
        std::getline(std::cin, line);
        for (char c : line) {
            if (out.length() && out[out.length() - 1] == map[c][0]) {
                out += " ";
            }
            out += map[c];
        }
        out += '\n';
    }

    std::cout << out;
    return 0;
}