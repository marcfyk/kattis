#include <iostream>
#include <climits>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    int N = 3;

    int arrival[N];
    int departure[N];
    
    for (int i = 0; i < N; ++i) {
        std::cin >> arrival[i] >> departure[i];
    }

    int min_arrival = INT_MAX;
    int max_departure = INT_MIN;

    for (int i = 0; i < N; ++i) {
        if (arrival[i] < min_arrival) {
            min_arrival = arrival[i];
        }
        if (departure[i] > max_departure) {
            max_departure = departure[i];
        }
    }

    int cost = 0;
    for (int i = min_arrival; i <= max_departure; ++i) {
        int count = 0;
        for (int j = 0; j < N; ++j) {
            if (arrival[j] <= i and departure[j] > i) {
                ++count;
            }
        }
        switch (count) {
        case 1:
            cost += A;
            break;
        case 2:
            cost += B * 2;
            break;
        case 3:
            cost += C * 3;
            break;
        }
    }

    std::cout << cost;

    return 0;
}