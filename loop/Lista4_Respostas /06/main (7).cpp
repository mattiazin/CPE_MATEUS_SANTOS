#include <iostream>
#include <cstdlib> // Para a função rand e srand
#include <ctime>   // Para a função time

int main() {
    srand(time(nullptr)); // Inicializa o gerador de números aleatórios com uma semente única

    std::cout << "Pense em um número entre 1 e 100.\n";
    std::cout << "Vou tentar adivinhar o número em no máximo sete tentativas.\n";

    int min = 1;
    int max = 100;
    int tentativa;
    char resposta;

    for (int i = 1; i <= 7; ++i) {
        tentativa = min + (rand() % (max - min + 1)); // Gera uma tentativa aleatória
        std::cout << "É " << tentativa << " o número em que você está pensando? (s/n): ";
        std::cin >> resposta;

        if (resposta == 's' || resposta == 'S') {
            std::cout << "Acertei! O número era " << tentativa << ".\n";
            break;
        } else if (resposta == 'n' || resposta == 'N') {
            std::cout << "O número em que você está pensando é menor ou maior que " << tentativa << "? (m/M para menor, a/A para maior): ";
            std::cin >> resposta;
            if (resposta == 'm' || resposta == 'M') {
                max = tentativa - 1;
            } else if (resposta == 'a' || resposta == 'A') {
                min = tentativa + 1;
            } else {
                std::cout << "Resposta inválida. Por favor, responda com 'm', 'M', 'a' ou 'A'.\n";
                --i; // Para que esta iteração seja repetida
            }
        } else {
            std::cout << "Resposta inválida. Por favor, responda com 's' ou 'n'.\n";
            --i; // Para que esta iteração seja repetida
        }
    }

    return 0;
}
