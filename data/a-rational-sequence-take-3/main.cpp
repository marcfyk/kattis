#include <iostream>
#include <vector>
#include <deque>

int main() {
    int p;
    std::cin >> p;
    std::vector<int> data(p);
    for (int i = 0; i < p; ++i) {
        int data_set;
        std::cin >> data_set >> data[i];
    }

    int left = 0;
    int right = 1;
    std::string out;
    for (int i = 1; i <= p; ++i) {
        out += std::to_string(i) + ' ';
        int n = data[i - 1];
        std::deque<int> path;
        while (n != 1) {
            if (n % 2 == 0) {
                path.push_back(left);
            } else {
                path.push_back(right);
            }
            n /= 2;
        }

        int p = 1;
        int q = 1;
        while (!path.empty()) {
            if (path.back() == left) {
                q += p;
            } else {
                p += q;
            }
            path.pop_back();
        }
        out += std::to_string(p) + '/' + std::to_string(q) + '\n';
    }
    std::cout << out;
    return 0;
}