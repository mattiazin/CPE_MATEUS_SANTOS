#include <iostream>

int main() {
    double lado1, lado2, lado3;

    // Solicita as medidas dos lados do triângulo
    std::cout << "Digite o comprimento do primeiro lado: ";
    std::cin >> lado1;
    std::cout << "Digite o comprimento do segundo lado: ";
    std::cin >> lado2;
    std::cout << "Digite o comprimento do terceiro lado: ";
    std::cin >> lado3;

    // Verifica se as medidas formam um triângulo
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            std::cout << "O triângulo é Equilátero.\n";
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "O triângulo é Isósceles.\n";
        } else {
            std::cout << "O triângulo é Escaleno.\n";
        }
    } else {
        std::cout << "As medidas fornecidas não formam um triângulo.\n";
    }

    return 0;
}
