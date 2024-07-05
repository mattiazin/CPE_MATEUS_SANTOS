#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countCharInLine(const string& line, char ch) {
    int count = 0;
    for (char c : line) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string filename = "mochileiro.txt"; // nome do arquivo a ser lido
    char character; // caractere a ser contado
    cout << "Digite o caractere que deseja contar: ";
    cin >> character;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        int occurrences = countCharInLine(line, character);
        cout << "Na linha: \"" << line << "\", ocorrencias de '" << character << "': " << occurrences << endl;
    }

    file.close();

    return 0;
}
