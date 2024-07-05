#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void cadastrarAluno() {
    string nome, matricula;
    cout << "Digite o nome do aluno: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Digite a matrícula do aluno: ";
    getline(cin, matricula);

    ofstream alunoFile(nome + ".txt");
    if (!alunoFile.is_open()) {
        cerr << "Erro ao criar o arquivo do aluno." << endl;
        return;
    }
    
    alunoFile << matricula << endl;
    alunoFile.close();
    
    cout << "Aluno cadastrado com sucesso!" << endl;
}

void adicionarNota() {
    string nome, nota;
    cout << "Digite o nome do aluno: ";
    cin.ignore();
    getline(cin, nome);
    
    ifstream alunoFile(nome + ".txt");
    if (!alunoFile.is_open()) {
        cerr << "Aluno não cadastrado." << endl;
        return;
    }
    alunoFile.close();
    
    cout << "Digite a nota do aluno: ";
    getline(cin, nota);
    
    ofstream alunoFileAppend(nome + ".txt", ios::app);
    if (!alunoFileAppend.is_open()) {
        cerr << "Erro ao abrir o arquivo do aluno." << endl;
        return;
    }
    
    alunoFileAppend << nota << endl;
    alunoFileAppend.close();
    
    cout << "Nota adicionada com sucesso!" << endl;
}

void calcularMedia() {
    string nome;
    cout << "Digite o nome do aluno: ";
    cin.ignore();
    getline(cin, nome);
    
    ifstream alunoFile(nome + ".txt");
    if (!alunoFile.is_open()) {
        cerr << "Aluno não cadastrado." << endl;
        return;
    }
    
    string linha;
    getline(alunoFile, linha); // Pular a linha da matrícula

    vector<double> notas;
    while (getline(alunoFile, linha)) {
        stringstream ss(linha);
        double nota;
        ss >> nota;
        notas.push_back(nota);
    }
    alunoFile.close();
    
    if (notas.empty()) {
        cout << "O aluno não possui notas cadastradas." << endl;
        return;
    }
    
    double soma = 0;
    for (double nota : notas) {
        soma += nota;
    }
    double media = soma / notas.size();
    
    cout << "A média do aluno " << nome << " é " << media << endl;
}

int main() {
    int opcao;
    do {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Adicionar nota de um aluno" << endl;
        cout << "3. Calcular média de um aluno" << endl;
        cout << "4. Fechar o programa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Programa encerrado." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}
