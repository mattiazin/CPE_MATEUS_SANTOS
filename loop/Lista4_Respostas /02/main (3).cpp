#include <iostream>

int main() {
    // Padrão 1
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    // Padrão 2
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10 - i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    // Padrão 3
    for (int i = 0; i < 10; ++i) {
        for (int k = 0; k < i; ++k) {
            std::cout << ' ';
        }
        for (int j = 0; j < 10 - i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    // Padrão 4
    for (int i = 0; i < 10; ++i) {
        for (int k = 0; k < 9 - i; ++k) {
            std::cout << ' ';
        }
        for (int j = 0; j <= i; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}

