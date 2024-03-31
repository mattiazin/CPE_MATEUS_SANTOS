#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis
    float num1, num2;
    
    // Solicita ao usuário fornecer os dois números
    cout << "Digite o primeiro número: ";
    cin >> num1;
    
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Calcula e imprime a soma
    float soma = num1 + num2;
    cout << "Soma: " << soma << endl;

    // Calcula e imprime o produto
    float produto = num1 * num2;
    cout << "Produto: " << produto << endl;

    // Calcula e imprime a diferença
    float diferenca = num1 - num2;
    cout << "Diferença: " << diferenca << endl;

    // Verifica se o segundo número é zero para evitar divisão por zero
    if (num2 != 0) {
        // Calcula e imprime o quociente
        float quociente = num1 / num2;
        cout << "Quociente: " << quociente << endl;
    } else {
        cout << "Não é possível calcular o quociente, pois o segundo número é zero." << endl;
    }

    return 0;
}
