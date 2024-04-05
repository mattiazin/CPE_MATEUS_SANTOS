#include <iostream>

int main() {
    int numeroBinario;
    int posicao = 1;
    int numeroDecimal = 0;

    std::cout << "Digite um número binário: ";
    std::cin >> numeroBinario;

    while (numeroBinario > 0) {
        int digito = numeroBinario % 10;
        numeroDecimal += digito * posicao;
        posicao *= 2;
        numeroBinario /= 10;
    }

    std::cout << "O número decimal equivalente é: " << numeroDecimal << std::endl;

    return 0;
}
