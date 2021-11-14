#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    std::vector<int> n(2);
    std::cin >> n[0] >> n[1];
    std::sort(n.begin(), n.end());
    std::copy(n.begin(), n.end(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}