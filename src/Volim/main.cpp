#include <iostream>
#include <vector>

class Question {
public:
    int time;
    char status;
    Question(int time, char status) : time(time), status(status) {}
};

int main() {
    int K, N;
    std::cin >> K >> N;
    std::vector<Question> qns;
    for (int i = 0; i < N; ++i) {
        int T;
        char Z;
        std::cin >> T >> Z;
        qns.push_back(Question(T, Z));
    }

    int limit = 210;
    int t = 0;
    int index = K - 1;
    for (int i = 0; i < N; ++i) {
        t += qns[i].time;
        if (t >= limit) {
            break;
        }
        if (qns[i].status == 'T') {
            index = (index + 1) % 8;
        }
    }
    std::cout << index + 1;
    return 0;
}