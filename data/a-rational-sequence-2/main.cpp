#include <iostream>
#include <string>
#include <vector>

int main() {
    int P;
    std::cin >> P;
    
    for (int i = 0; i < P; ++i) {
        int K;
        std::string data;
        std::cin >> K >> data;

        int index = data.find('/');
        int p = std::stoi(data.substr(0, index));
        int q = std::stoi(data.substr(index + 1));

        int left = 0;
        int right = 1;

        std::vector<int> nodes;
        while (p > 1 || q > 1) {
            if (p < q) {
                nodes.push_back(left);
                q -= p;
            } else {
                nodes.push_back(right);
                p -= q;
            }
        }

        int count = 1;
        for (int i = 0; i < nodes.size(); ++i) {
            count *= 2;
            if (nodes[nodes.size() - i - 1] == right) {
                ++count;
            }
        }

        std::cout << K << " " << count << std::endl;
    }
    return 0;
}