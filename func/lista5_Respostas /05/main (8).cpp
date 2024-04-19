#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para geração de números aleatórios
    char playAgain;

    do {
        int secretNumber = rand() % 1000 + 1;
        int guess;
        
        cout << "Eu tenho um número entre 1 e 1000." << endl;
        cout << "Você consegue adivinhar o meu número?" << endl;
        
        do {
            cout << "Digite seu palpite: ";
            cin >> guess;
            
            if (guess == secretNumber) {
                cout << "Excelente! Você adivinhou o número!" << endl;
            } else if (guess < secretNumber) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }
        } while (guess != secretNumber);

        cout << "Você gostaria de jogar novamente (s ou n)? ";
        cin >> playAgain;
    } while (playAgain == 's' || playAgain == 'S');

    return 0;
}
