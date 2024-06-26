#include <iostream>
#include <string>
#include <cctype>
#include <thread>
#include <chrono>

using namespace std;

// Constante para determinar o tamanho da Struct CadRamal
const int iTam = 3;
int iQtdRegistros = 0;

struct Categoria {
    int iCodCategoria;
    string sNomeCategoria;
};

struct Setor {
    string sSetor;
};

struct Localizacao {
    int iCodLocal;
    string sNomeLocal;
};

struct CadRamal {
    int iNumRamal;
    Categoria VarCategoria;
    Setor VarSetor;
    Localizacao VarLocal;
    string sSalaRamal;
    string sRespRamal;
    string sRespAteste;
};

// Prototipação de Funções e Procedimentos    
void CadastroDeRamais(CadRamal& Ramal, CadRamal* pVetor);
bool VerificaRamal(CadRamal* pVetor, int pAux);
void ImprimirCadastroDeRamais(const CadRamal& Ramal);

// Função para uma pausa
void pausa(int segundos) {
    this_thread::sleep_for(chrono::seconds(segundos));
}

int main() {
    CadRamal iVetor[iTam];

    if (iQtdRegistros == iTam) {
        cout << "\n=======================================================";
        cout << "\nSr Usuário, não há espaço livre para novos Cadastros!..";
        cout << "\n=======================================================";
        pausa(4);
        return 0;
    }

    // Entrada de dados na estrutura
    for (int i = 0; i < iTam; i++) {
        CadastroDeRamais(iVetor[i], iVetor);
        iQtdRegistros++;
    }

    // Impressão dos dados da estrutura
    for (int i = 0; i < iTam; i++) {
        cout << "\n==============================================================";
        cout << "\nIMPRESSÃO DO CADASTRO DE RAMAIS DO MINISTÉRIO DO MEIO AMBIENTE";
        cout << "\n==============================================================\n";
        ImprimirCadastroDeRamais(iVetor[i]);
    }

    return 0;
}

// Função para cadastrar Ramais
void CadastroDeRamais(CadRamal& Ramal, CadRamal* pVetor) {
    cout << "\n=================================================";
    cout << "\nCADASTRO DE RAMAIS DO MINISTÉRIO DO MEIO AMBIENTE";
    cout << "\n=================================================\n";

    int iAux = 0;

    do {
        cout << "\nInforme o número do Ramal entre 1000 e 3000 = ";
        cin >> iAux;
        cin.ignore();

        if (iAux < 1000 || iAux > 2999) {
            cout << "\nNúmero do Ramal fora do intervalo 1000 até 2999\n";
            pausa(2);
        } else if (!VerificaRamal(pVetor, iAux)) {
            cout << "\nNúmero do Ramal já está cadastrado\n";
            pausa(1);
            iAux = -1;
        }

        if (iAux != -1) {
            Ramal.iNumRamal = iAux;
        }
    } while (iAux < 1000 || iAux > 2999);

    do {
        cout << "\nInforme o código da Categoria entre 0 e 6 = ";
        cin >> Ramal.VarCategoria.iCodCategoria;
        cin.ignore();
        if (Ramal.VarCategoria.iCodCategoria < 0 || Ramal.VarCategoria.iCodCategoria > 6) {
            cout << "\nCódigo da Categoria fora do intervalo 0 até 6\n";
            pausa(2);
        }
    } while (Ramal.VarCategoria.iCodCategoria < 0 || Ramal.VarCategoria.iCodCategoria > 6);

    cout << "\nInforme a descrição da Categoria = ";
    getline(cin, Ramal.VarCategoria.sNomeCategoria);
    for (auto& letra : Ramal.VarCategoria.sNomeCategoria) {
        letra = toupper(letra);
    }

    do {
        cout << "\nInforme a descrição do Setor = ";
        getline(cin, Ramal.VarSetor.sSetor);
        if (Ramal.VarSetor.sSetor.empty()) {
            cout << "\nDescrição do Setor deve ser preenchida\n";
            pausa(2);
        }
    } while (Ramal.VarSetor.sSetor.empty());

    for (auto& letra : Ramal.VarSetor.sSetor) {
        letra = toupper(letra);
    }

    do {
        cout << "\nInforme o código da Localização 500 ou 505 = ";
        cin >> Ramal.VarLocal.iCodLocal;
        cin.ignore();
        if (Ramal.VarLocal.iCodLocal != 500 && Ramal.VarLocal.iCodLocal != 505) {
            cout << "\nCódigo da Localização diferente de 500 ou 505\n";
            pausa(2);
        }
    } while (Ramal.VarLocal.iCodLocal != 500 && Ramal.VarLocal.iCodLocal != 505);

    cout << "\nInforme a descrição da Localização = ";
    getline(cin, Ramal.VarLocal.sNomeLocal);
    for (auto& letra : Ramal.VarLocal.sNomeLocal) {
        letra = toupper(letra);
    }

    do {
        cout << "\nInforme o número do andar + o número da sala = ";
        getline(cin, Ramal.sSalaRamal);
        if (Ramal.sSalaRamal.empty()) {
            cout << "\nNúmero do andar + o número da sala deve ser preenchido\n";
            pausa(2);
        }
    } while (Ramal.sSalaRamal.empty());

    do {
        cout << "\nInforme o nome do Responsável pelo Ramal = ";
        getline(cin, Ramal.sRespRamal);
        if (Ramal.sRespRamal.empty()) {
            cout << "\nO nome do Responsável pelo Ramal deve ser preenchido\n";
            pausa(2);
        }
    } while (Ramal.sRespRamal.empty());

    for (auto& letra : Ramal.sRespRamal) {
        letra = toupper(letra);
    }

    do {
        cout << "\nInforme o nome do Responsável pelo Ateste = ";
        getline(cin, Ramal.sRespAteste);
        if (Ramal.sRespAteste.empty()) {
            cout << "\nO nome do Responsável pelo Ateste deve ser preenchido\n";
            pausa(2);
        }
    } while (Ramal.sRespAteste.empty());

    for (auto& letra : Ramal.sRespAteste) {
        letra = toupper(letra);
    }
}

// Pesquisa por Ramal - crítica do cadastro
bool VerificaRamal(CadRamal* pVetor, int pAux) {
    for (int i = 0; i < iQtdRegistros; i++) {
        if (pVetor[i].iNumRamal == pAux) {
            return false;
        }
    }
    return true;
}

// Procedimento para imprimir o cadastro
void ImprimirCadastroDeRamais(const CadRamal& Ramal) {
    cout << "\nRamal                  : " << Ramal.iNumRamal;
    cout << "\nCategoria              : " << Ramal.VarCategoria.iCodCategoria << " - " << Ramal.VarCategoria.sNomeCategoria;
    cout << "\nSetor                  : " << Ramal.VarSetor.sSetor;
    cout << "\nEdifício               : " << Ramal.VarLocal.iCodLocal << " - " << Ramal.VarLocal.sNomeLocal;
    cout << "\nSala                   : " << Ramal.sSalaRamal;
    cout << "\nResponsável pelo Ramal : " << Ramal.sRespRamal;
    cout << "\nResponsável pelo Ateste: " << Ramal.sRespAteste;
    cout << "\n==============================================================\n";
    pausa(2);
}
