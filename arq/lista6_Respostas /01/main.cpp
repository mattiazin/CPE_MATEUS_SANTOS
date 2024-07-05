#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

// Função para ler os vetores do arquivo
vector<vector<int>> lerVetores(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    vector<vector<int>> vetores;
    string linha;

    while (getline(arquivo, linha)) {
        vector<int> vetor;
        stringstream ss(linha);
        int num;
        
        while (ss >> num) {
            vetor.push_back(num);
        }

        vetores.push_back(vetor);
    }

    arquivo.close();
    return vetores;
}

// Função para somar os vetores
vector<int> somarVetores(const vector<vector<int>>& vetores) {
    vector<int> soma;

    if (vetores.empty())
        return soma;

    // Inicializa a soma com o primeiro vetor
    soma = vetores[0];

    // Soma os vetores restantes
    for (size_t i = 1; i < vetores.size(); ++i) {
        for (size_t j = 0; j < vetores[i].size(); ++j) {
            if (j < soma.size()) {
                soma[j] += vetores[i][j];
            } else {
                soma.push_back(vetores[i][j]);
            }
        }
    }

    return soma;
}

// Função para salvar a soma no arquivo soma.txt
void salvarSoma(const vector<int>& soma, const string& nomeArquivo) {
    ofstream arquivo(nomeArquivo);
    
    if (arquivo.is_open()) {
        for (int num : soma) {
            arquivo << num << " ";
        }
        arquivo.close();
        cout << "Soma dos vetores foi salva em " << nomeArquivo << endl;
    } else {
        cout << "Erro ao abrir o arquivo " << nomeArquivo << " para salvar a soma." << endl;
    }
}

int main() {
    string arquivoEntrada = "vetores.txt";
    string arquivoSaida = "soma.txt";

    // Ler os vetores do arquivo
    vector<vector<int>> vetores = lerVetores(arquivoEntrada);

    // Calcular a soma dos vetores
    vector<int> soma = somarVetores(vetores);

    // Salvar a soma no arquivo
    salvarSoma(soma, arquivoSaida);

    return 0;
}
