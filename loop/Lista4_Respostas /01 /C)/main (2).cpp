#include <iostream>
#include <cmath>
using namespace std;

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    int n = 10; // Número de termos a serem somados
    double exp_x = 1.0; // Valor inicial de e^x

    // Loop para adicionar os termos
    for (int i = 1; i <= n; ++i) {
        exp_x += pow(x, i) / fatorial(i);
    }

    cout << "O valor de e^x aproximado com " << n << " termos é: " << exp_x << endl;

    return 0;
}
