#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

int main() {
    ifstream alturaFile("altura.txt");
    ifstream pesoFile("peso.txt");

    if (!alturaFile.is_open() || !pesoFile.is_open()) {
        cerr << "Erro ao abrir os arquivos." << endl;
        return 1;
    }

    string codigo;
    string maiorAlturaCodigo, maiorPesoCodigo;
    double altura, peso;
    double maiorAltura = numeric_limits<double>::lowest();
    double maiorPeso = numeric_limits<double>::lowest();

    // Processar o arquivo de alturas
    while (alturaFile >> codigo >> altura) {
        if (altura > maiorAltura) {
            maiorAltura = altura;
            maiorAlturaCodigo = codigo;
        }
    }

    // Processar o arquivo de pesos
    while (pesoFile >> codigo >> peso) {
        if (peso > maiorPeso) {
            maiorPeso = peso;
            maiorPesoCodigo = codigo;
        }
    }

    alturaFile.close();
    pesoFile.close();

    cout << "Pessoa com maior altura: " << maiorAlturaCodigo << " com " << maiorAltura << " metros." << endl;
    cout << "Pessoa com maior peso: " << maiorPesoCodigo << " com " << maiorPeso << " quilogramas." << endl;

    return 0;
}
