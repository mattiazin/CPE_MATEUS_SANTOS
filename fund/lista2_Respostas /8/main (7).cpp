#include <iostream>
#include <cmath>

int main() {
    // Declaração das variáveis para armazenar os valores dos catetos
    double cateto1, cateto2;

    // Solicita ao usuário que digite os valores dos catetos
    std::cout << "Digite o valor do primeiro cateto: ";
    std::cin >> cateto1;

    std::cout << "Digite o valor do segundo cateto: ";
    std::cin >> cateto2;

    // Calcula o valor da hipotenusa usando o teorema de Pitágoras
    double hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    // Imprime o valor da hipotenusa
    std::cout << "O valor da hipotenusa é: " << hipotenusa << std::endl;

    return 0;
}
