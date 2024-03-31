#include <iostream>
#include <cmath>

bool ehPrimo(int numero) {
    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        return false;
    }

    // Verifica se o número é divisível por algum número de 2 até a sua raiz quadrada
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false; // O número é divisível por outro número além de 1 e ele mesmo
        }
    }

    return true; // Se nenhum divisor foi encontrado, o número é primo
}

int main() {
    // Declaração da variável para armazenar o número
    int numero;

    // Solicita ao usuário que digite o número
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    // Verifica se o número é primo e exibe o resultado
    if (ehPrimo(numero)) {
        std::cout << numero << " é um número primo." << std::endl;
    } else {
        std::cout << numero << " não é um número primo." << std::endl;
    }

    return 0;
}
