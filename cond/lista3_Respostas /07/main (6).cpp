#include <iostream>

int main() {
    int senhaDigitada;

    // Solicita a senha ao usuário
    std::cout << "Digite a senha: ";
    std::cin >> senhaDigitada;

    // Verifica se a senha está correta
    if (senhaDigitada == 1234) {
        std::cout << "ACESSO PERMITIDO\n";
    } else {
        std::cout << "ACESSO NEGADO\n";
    }

    return 0;
}
