#include <iostream>

int main() {
    // Declaração das variáveis para armazenar largura e comprimento
    double largura, comprimento;

    // Solicita ao usuário que digite a largura da sala e armazena o valor
    std::cout << "Digite a largura da sala (em metros): ";
    std::cin >> largura;

    // Solicita ao usuário que digite o comprimento da sala e armazena o valor
    std::cout << "Digite o comprimento da sala (em metros): ";
    std::cin >> comprimento;

    // Calcula a área da sala multiplicando largura por comprimento
    double area = largura * comprimento;

    // Exibe a área da sala com unidades
    std::cout << "A área da sala é: " << area << " metros quadrados." << std::endl;

    return 0;
}
