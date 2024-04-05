#include <iostream>

int main() {
    int numero;
    
    std::cout << "Digite um número de cinco dígitos: ";
    std::cin >> numero;

    int digito1 = numero / 10000;
    int digito2 = (numero % 10000) / 1000;
    int digito3 = (numero % 1000) / 100;
    int digito4 = (numero % 100) / 10;
    int digito5 = numero % 10;

    if (digito1 == digito5 && digito2 == digito4) {
        std::cout << "O número " << numero << " é um palíndromo.\n";
    } else {
        std::cout << "O número " << numero << " não é um palíndromo.\n";
    }

    return 0;
}
