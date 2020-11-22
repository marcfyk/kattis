#include <iostream>
#include <vector>
#include <algorithm>

class Friend {
public:
    int id;
    int offset;
    Friend(int id, int offset) : id(id), offset(offset) {}
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Friend> friends;

    friends.push_back(Friend(1, -1));
    for (int id = 1; id < n; ++id) {
        int offset;
        std::cin >> offset;
        friends.push_back(Friend(id + 1, offset));
    }

    std::sort(friends.begin(), friends.end(), [](Friend f1, Friend f2) { return f1.offset < f2.offset; });

    for (int i = 0; i < friends.size(); ++i) {
        std::cout << friends[i].id << " ";
    }

}