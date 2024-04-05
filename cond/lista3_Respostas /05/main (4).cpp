#include <iostream>
#include <cctype> // Para a função std::tolower

int main() {
    char caractere;

    std::cout << "Digite um caractere: ";
    std::cin >> caractere;

    // Converte o caractere para minúsculo para facilitar a comparação
    caractere = std::tolower(caractere);

    switch(caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << caractere << " é uma vogal.\n";
            break;
        default:
            std::cout << caractere << " não é uma vogal.\n";
    }

    return 0;
}
