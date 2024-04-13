#include <iostream>

double calcularConstanteMatematica() {
    double euler = 1.0;
    double termo = 1.0;
    for (int i = 1; i <= 10; i++) {
        termo /= i;
        euler += termo;
    }
    return euler;
}

int main() {
    double euler = calcularConstanteMatematica();
    std::cout << "O valor da constante matemática (euler) é aproximadamente: " << euler << std::endl;

    return 0;
}
