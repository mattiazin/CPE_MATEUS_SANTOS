#include <iostream>

int main() {
    const int MAX_NUM = 5;
    const int MAX_VALUE = 30;

    int numbers[MAX_NUM];

    // Lendo os cinco números entre 1 e 30
    for (int i = 0; i < MAX_NUM; ++i) {
        std::cout << "Digite o " << i + 1 << "º número entre 1 e 30: ";
        std::cin >> numbers[i];

        // Verificando se o número está dentro do intervalo válido
        if (numbers[i] < 1 || numbers[i] > MAX_VALUE) {
            std::cout << "Número inválido. Por favor, digite um número entre 1 e 30.\n";
            --i;  // Reintroduz a iteração para que o usuário insira novamente o número
        }
    }

    // Exibindo as barras de asteriscos
    std::cout << "\nGráficos de barras:\n";
    for (int i = 0; i < MAX_NUM; ++i) {
        std::cout << numbers[i] << ": ";
        for (int j = 0; j < numbers[i]; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
