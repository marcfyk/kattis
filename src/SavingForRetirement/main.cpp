#include <iostream>

int main() {
    int B, Br, Bs, A, As;
    std::cin >> B >> Br >> Bs >> A >> As;

    int bob_savings = (Br - B) * Bs;
    int alice_savings = 0;
    int Ar = A;

    while (alice_savings <= bob_savings) {
        alice_savings += As;
        ++Ar;
    }

    std::cout << Ar;

    return 0;
}