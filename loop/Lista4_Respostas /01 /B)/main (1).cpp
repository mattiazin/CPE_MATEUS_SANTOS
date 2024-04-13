#include <iostream>
#include <iostream>
using namespace std;

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main() {
    int n = 10; // Número de termos a serem somados
    double e = 1.0; // Valor inicial de e

    // Loop para adicionar os termos
    for (int i = 1; i <= n; ++i) {
        e += 1.0 / fatorial(i);
    }

    cout << "O valor de e aproximado com " << n << " termos é: " << e << endl;

    return 0;
}
