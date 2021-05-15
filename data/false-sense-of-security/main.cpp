#include <iostream>
#include <vector>
#include <unordered_map>

const std::string A = ".-";
const std::string B = "-...";
const std::string C = "-.-.";
const std::string D = "-..";
const std::string E = ".";
const std::string F = "..-.";
const std::string G = "--.";
const std::string H = "....";
const std::string I = "..";
const std::string J = ".---";
const std::string K = "-.-";
const std::string L = ".-..";
const std::string M = "--";
const std::string N = "-.";
const std::string O = "---";
const std::string P = ".--.";
const std::string Q = "--.-";
const std::string R = ".-.";
const std::string S = "...";
const std::string T = "-";
const std::string U = "..-";
const std::string V = "...-";
const std::string W = ".--";
const std::string X = "-..-";
const std::string Y = "-.--";
const std::string Z = "--..";
const std::string UNDERSCORE = "..--";
const std::string COMMA = ".-.-";
const std::string PERIOD = "---.";
const std::string QUESTION = "----";

std::unordered_map<char, std::string> table {
    {'A', A}, {'B', B}, {'C', C}, {'D', D}, {'E', E}, {'F', F}, {'G', G}, {'H', H}, {'I', I}, {'J', J}, {'K', K}, {'L', L}, {'M', M}, 
    {'N', N}, {'O', O}, {'P', P}, {'Q', Q}, {'R', R}, {'S', S}, {'T', T}, {'U', U}, {'V', V}, {'W', W}, {'X', X}, {'Y', Y}, {'Z', Z},
    {'_', UNDERSCORE}, {',', COMMA}, {'.', PERIOD}, {'?', QUESTION}
};

std::unordered_map<std::string, char> inverted_table;

int main() {
    for (const auto &[character, morse] : table) {
        inverted_table[morse] = character;
    }

    std::string message, out;
    while (std::cin >> message) {
        std::string morse_code;
        std::vector<int> lengths(message.size());
        for (int i = 0; i < message.size(); ++i) {
            char c = message[i];
            morse_code += table[c];
            lengths[i] = table[c].size();
        }
        std::string decoded_message;
        int index = 0;
        for (int i = message.size() - 1; i >= 0; --i) {
            int l = lengths[i];
            decoded_message += inverted_table[morse_code.substr(index, l)];
            index = index + l;
        }
        out += decoded_message + '\n';
    }

    std::cout << out;

    return 0;
}