#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> swords(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> swords[i];
    }
    int tb = 0;
    int lr = 0;
    for (const std::string &sword : swords) {
        for (int i = 0; i < 4; ++i) {
            if (sword[i] == '0') {
                if (i < 2) {
                    ++tb;
                } else {
                    ++lr;
                }
            }
        }
    }
    int sword_num = std::min(tb / 2, lr / 2);
    int parts = 2 * sword_num;
    std::cout << sword_num << ' ' << (tb - parts) << ' ' << (lr - parts);
    return 0;
}