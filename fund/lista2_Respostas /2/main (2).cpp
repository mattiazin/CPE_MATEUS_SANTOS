#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    float raio;
    const float pi = 3.14159;

    // Solicita ao usuário fornecer o raio do círculo
    cout << "Digite o raio do círculo: ";
    cin >> raio;

    // Calcula o diâmetro da circunferência
    float diametro = 2 * raio;

    // Calcula a área do círculo
    float area = pi * raio * raio;

    // Imprime o diâmetro e a área do círculo
    cout << "O diâmetro da circunferência é: " << diametro << endl;
    cout << "A área do círculo é: " << area << endl;

    return 0;
}
