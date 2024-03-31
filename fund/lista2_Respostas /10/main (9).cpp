#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    // Solicita ao usuário que digite uma string com 5 caracteres
    std::string str;
    std::cout << "Digite uma string com 5 caracteres: ";
    std::cin >> str;

    // Verifica se a string tem exatamente 5 caracteres
    if (str.size() != 5) {
        std::cerr << "A string deve conter exatamente 5 caracteres." << std::endl;
        return 1;
    }

    // Cria um mapa para contar as ocorrências de cada vogal
    std::unordered_map<char, int> vogais;
    vogais['a'] = 0;
    vogais['e'] = 0;
    vogais['i'] = 0;
    vogais['o'] = 0;
    vogais['u'] = 0;

    // Conta quantas vezes cada vogal aparece na string
    for (char c : str) {
        if (vogais.find(c) != vogais.end()) {
            vogais[c]++;
        }
    }

    // Exibe quantas vezes cada vogal aparece na string
    std::cout << "Quantidade de vezes que cada vogal aparece na string:" << std::endl;
    for (const auto& par : vogais) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    // Criptografa a string conforme as instruções dadas
    for (char& c : str) {
        if (c == 'a') {
            c = 'i';
        } else if (c == 'e') {
            c = 'o';
        } else if (c == 'i') {
            c = 'u';
        }
    }

    // Exibe a nova string criptografada
    std::cout << "String criptografada: " << str << std::endl;

    return 0;
}
