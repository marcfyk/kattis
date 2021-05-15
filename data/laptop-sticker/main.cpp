#include <iostream>

int main() {
    int wc, hc, ws, hs;
    std::cin >> wc >> hc >> ws >> hs;
    std::cout << ((wc - ws >= 2) and (hc - hs >= 2)) << std::endl;
    return 0;
}
