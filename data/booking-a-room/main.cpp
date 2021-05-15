#include <iostream>
#include <unordered_set>

int get_unbooked(const std::unordered_set<int> &booked, int r) {
    for (int i = 1; i <= r; ++i) {
        if (not booked.count(i)) {
            return i;
        }
    }
    return 0;
}

int main() {
    int r, n;
    std::cin >> r >> n;

    std::unordered_set<int> booked;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        booked.insert(num);
    }

    int out = get_unbooked(booked, r);
    if (out) {
        std::cout << out;
    } else {
        std::cout << "too late";
    }


    return 0;
}