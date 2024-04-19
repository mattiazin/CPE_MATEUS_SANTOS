#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para gerar uma pergunta de multiplicação
pair<int, int> generate_question() {
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    return make_pair(num1, num2);
}

int main() {
    srand(time(0)); // Seed para geração de números aleatórios

    while (true) {
        pair<int, int> question = generate_question();
        int num1 = question.first;
        int num2 = question.second;
        
        int answer;
        cout << "Quanto é " << num1 << " vezes " << num2 << "? ";
        cin >> answer;

        while (answer != num1 * num2) {
            cout << "Não. Por favor, tente novamente." << endl;
            cout << "Quanto é " << num1 << " vezes " << num2 << "? ";
            cin >> answer;
        }
        
        cout << "Muito bom!" << endl;
    }

    return 0;
}
