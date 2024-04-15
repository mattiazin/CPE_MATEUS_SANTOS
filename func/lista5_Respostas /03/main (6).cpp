#include <iostream>

bool perfect(int num) {
    int soma = 1; // Iniciamos com 1 porque todo número é divisível por 1

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            soma += i;
            if (i != num / i) {
                soma += num / i;
            }
        }
    }

    return soma == num;
}

int main() {
    std::cout << "Números perfeitos entre 1 e 1000:\n";
    for (int num = 2; num <= 1000; ++num) {
        if (perfect(num)) {
            std::cout << num << " é perfeito. Fatores: 1 ";
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    std::cout << i << " ";
                    if (i != num / i) {
                        std::cout << num / i << " ";
                    }
                }
            }
            std::cout << "\n";
        }
    }

    return 0;
}
