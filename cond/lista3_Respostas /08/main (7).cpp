#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision

int main() {
    double numero1, numero2;
    char operacao;

    // Solicita os dois números e a operação ao usuário
    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;
    std::cout << "Digite a operação (+, -, * ou /): ";
    std::cin >> operacao;

    // Realiza a operação indicada pelo usuário
    switch (operacao) {
        case '+':
            std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " + " << numero2 << " = " << numero1 + numero2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " - " << numero2 << " = " << numero1 - numero2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " * " << numero2 << " = " << numero1 * numero2 << std::endl;
            break;
        case '/':
            if (numero2 != 0) {
                std::cout << "Resultado: " << std::fixed << std::setprecision(2) << numero1 << " / " << numero2 << " = " << numero1 / numero2 << std::endl;
            } else {
                std::cout << "Erro: Divisão por zero não é permitida.\n";
            }
            break;
        default:
            std::cout << "Operação inválida.\n";
    }

    return 0;
}
