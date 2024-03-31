#include <iostream>

int main() {
    // Declaração das variáveis para armazenar os números
    int num1, num2;

    // Solicita ao usuário que digite os dois números
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> num2;

    // Verifica se num1 é múltiplo de num2
    if (num1 % num2 == 0) {
        std::cout << num1 << " é múltiplo de " << num2 << std::endl;
    } else {
        std::cout << num1 << " não é múltiplo de " << num2 << std::endl;
    }

    return 0;
}
