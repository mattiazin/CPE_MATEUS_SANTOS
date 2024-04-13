#include <iostream>

unsigned long long int calcularFatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    unsigned long long int fatorial = 1;
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    std::cout << "Digite um número inteiro não negativo: ";
    std::cin >> numero;
    
    if(numero < 0) {
        std::cout << "Número negativo! Por favor, digite um número não negativo." << std::endl;
        return 1;
    }

    unsigned long long int fatorial = calcularFatorial(numero);
    std::cout << "O fatorial de " << numero << " é: " << fatorial << std::endl;

    return 0;
}
