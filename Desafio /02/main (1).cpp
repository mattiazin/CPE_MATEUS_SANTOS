#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;

const int iTam = 2;
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

void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor);
bool VerificaRamal(CadRamal *pVetor, int &pRamal);
void ImprimirPesquisaNoCadastro(CadRamal *pVetor, int &pOpc);
void ImprimirCadastroDeRamais(CadRamal *pVetor);
bool VerificaAuxiliares(CadRamal *pVetor, string pAuxiliar, int &pRamal);

int main() {
    CadRamal VarCadRamal;
    CadRamal vVetor[iTam];
    CadRamal *pRamal = &VarCadRamal;
    int iOpc, iRamal;
    string sAuxiliar = "";

    do {
        system("clear");
        cout << "\n\t======================================="
             << "\n\tMENU PARA CADASTRO E PESQUISA DE RAMAIS"
             << "\n\t=======================================\n"
             << "\n\t0 para: Número do Ramal."
             << "\n\t1 para: Setor."
             << "\n\t2 para: Edifício."
             << "\n\t3 para: Responsável pelo Ramal."
             << "\n\t4 para: Responsável pelo Ateste."
             << "\n\t5 para: Cadastro de Ramais."
             << "\n\t6 para: Imprimir o Cadastro."
             << "\n\t7 para: Finalizar o Programa."
             << "\n\n\tInforme a Opção desejada = ";
        cin >> iOpc;

        switch(iOpc) {
            case 0:
                do {
                    system("clear");
                    cout << "\n==============="
                         << "\nLISTA DE RAMAIS"
                         << "\n===============\nRamais\n";
                    for (int i = 0; i < iTam; i++) {
                        ImprimirPesquisaNoCadastro(&vVetor[i], iRamal);
                        if (iRamal == -1) break;
                    }
                    if (iRamal == -1) break;
                    cout << "\n\nDigite o número do ramal que deseja pesquisar = ";
                    cin >> iRamal;
                    if (VerificaRamal(vVetor, iRamal)) {
                        cout << "\nNúmero do ramal informado não cadastrado!\n";
                        sleep(2);
                        continue;
                    }
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;
            case 1:
                do {
                    system("clear");
                    cout << "\n================"
                         << "\nLISTA DE SETORES"
                         << "\n================\nSetores\n";
                    for (int i = 0; i < iTam; i++) {
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);
                        if (iOpc == -1) break;
                    }
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o nome do Setor que deseja pesquisar = ";
                    cin >> sAuxiliar;
                    if (VerificaAuxiliares(vVetor, sAuxiliar, iRamal)) {
                        cout << "\nNome do setor informado não cadastrado!\n";
                        sleep(2);
                        continue;
                    }
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;
            case 2:
                do {
                    system("clear");
                    cout << "\n=================="
                         << "\nLISTA DE EDIFÍCIOS"
                         << "\n==================\nEdifícios\n";
                    for (int i = 0; i < iTam; i++) {
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);
                        if (iOpc == -1) break;
                    }
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o número do Edifício que deseja pesquisar = ";
                    cin >> iRamal;
                    if (VerificaRamal(vVetor, iRamal)) {
                        cout << "\nEdifício informado não cadastrado!\n";
                        sleep(2);
                        continue;
                    }
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;
            case 3:
                do {
                    system("clear");
                    cout << "\n================================="
                         << "\nLISTA DOS RESPONSÁVEIS PELO RAMAL"
                         << "\n=================================\nResponsáveis\n";
                    for (int i = 0; i < iTam; i++) {
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);
                        if (iOpc == -1) break;
                    }
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o nome do Responsável que deseja pesquisar = ";
                    cin >> sAuxiliar;
                    if (VerificaAuxiliares(vVetor, sAuxiliar, iRamal)) {
                        cout << "\nNome do Responsável informado não cadastrado!\n";
                        sleep(2);
                        continue;
                    }
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;
            case 4:
                do {
                    system("clear");
                    cout << "\n=================================="
                         << "\nLISTA DOS RESPONSÁVEIS PELO ATESTE"
                         << "\n==================================\nResponsáveis\n";
                    for (int i = 0; i < iTam; i++) {
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);
                        if (iOpc == -1) break;
                    }
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o nome do Responsável que deseja pesquisar = ";
                    cin >> sAuxiliar;
                    if (VerificaAuxiliares(vVetor, sAuxiliar, iRamal)) {
                        cout << "\nNome do Responsável informado não cadastrado!\n";
                        sleep(2);
                        continue;
                    }
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;
            case 5:
                if (iQtdRegistros == iTam) {
                    cout << "\n======================================================="
                         << "\nSr Usuário, não há espaço livre para novos Cadastros!.."
                         << "\n=======================================================";
                    sleep(4);
                    break;
                }
                for (int i = 0; i < iTam; i++) {
                    CadastroDeRamais(pRamal, &vVetor[i]);
                    vVetor[i] = VarCadRamal;
                    iQtdRegistros += 1;
                }
                break;
            case 6:
                system("clear");
                cout << "\n============================================================="
                     << "\nLISTAGEM DO CADASTRO DE RAMAIS DO MINISTÉRIO DO MEIO AMBIENTE"
                     << "\n=============================================================";
                if (iQtdRegistros == 0) {
                    cout << "\n======================================================="
                         << "\nSr Usuário, não há Registros Cadastros até o momento!.."
                         << "\n=======================================================\n";
                    sleep(4);
                    break;
                }
                for (int i = 0; i < iTam; i++) {
                    ImprimirCadastroDeRamais(&vVetor[i]);
                }
                break;
            case 7:
                return 0;
            default:
                cout << "\n\tOpção informada inválida!!\n";
                sleep(1);
        }
    } while (iOpc != 7);
}

void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor) {
    system("clear");
    cout << "\n================================================="
         << "\nCADASTRO DE RAMAIS DO MINISTÉRIO DO MEIO AMBIENTE"
         << "\n=================================================\n";
    int iAux = 0;

    do {
        cout << "\nInforme o número do Ramal entre 1000 e 3000 = ";
        cin >> iAux;
        if (iAux < 1000 || iAux > 2999) {
            cout << "\nNúmero do Ramal fora do intervalo 1000 até 2999\n";
            sleep(1);
        }
        pVetor = pRamal;
        if (!VerificaRamal(pVetor, iAux)) {
            cout << "\nNúmero do Ramal já está cadastrado\n";
            sleep(1);
            iAux = -1;
        }
        if (iAux != -1) {
            pRamal->iNumRamal = iAux;
        }
    } while (iAux < 1000 || iAux > 2999);

    do {
        cout << "\nInforme o código da Categoria entre 01 e 15 = ";
        cin >> iAux;
        if (iAux < 1 || iAux > 15) {
            cout << "\nCódigo de Categoria fora do intervalo 01 até 15\n";
            sleep(1);
        }
    } while (iAux < 1 || iAux > 15);
    pRamal->VarCategoria.iCodCategoria = iAux;

    cout << "\nInforme a descrição da Categoria = ";
    cin.ignore();
    getline(cin, pRamal->VarCategoria.sNomeCategoria);

    cout << "\nInforme o nome do Setor = ";
    getline(cin, pRamal->VarSetor.sSetor);

    do {
        cout << "\nInforme o código do Edifício entre 01 e 50 = ";
        cin >> iAux;
        if (iAux < 1 || iAux > 50) {
            cout << "\nCódigo do Edifício fora do intervalo 01 até 50\n";
            sleep(1);
        }
    } while (iAux < 1 || iAux > 50);
    pRamal->VarLocal.iCodLocal = iAux;

    cout << "\nInforme o nome do Edifício = ";
    cin.ignore();
    getline(cin, pRamal->VarLocal.sNomeLocal);

    cout << "\nInforme o número da Sala = ";
    getline(cin, pRamal->sSalaRamal);

    cout << "\nInforme o nome do Responsável pelo Ramal = ";
    getline(cin, pRamal->sRespRamal);

    cout << "\nInforme o nome do Responsável pelo Ateste = ";
    getline(cin, pRamal->sRespAteste);
}

void ImprimirPesquisaNoCadastro(CadRamal *pVetor, int &pOpc) {
    if (pOpc == 0) {
        cout << pVetor->iNumRamal << "\n";
    }
    if (pOpc == 1) {
        cout << pVetor->VarSetor.sSetor << "\n";
    }
    if (pOpc == 2) {
        cout << pVetor->VarLocal.sNomeLocal << "\n";
    }
    if (pOpc == 3) {
        cout << pVetor->sRespRamal << "\n";
    }
    if (pOpc == 4) {
        cout << pVetor->sRespAteste << "\n";
    }
}

void ImprimirCadastroDeRamais(CadRamal *pVetor) {
    cout << "\n\nNúmero do Ramal: " << pVetor->iNumRamal
         << "\nCódigo da Categoria: " << pVetor->VarCategoria.iCodCategoria
         << "\nDescrição da Categoria: " << pVetor->VarCategoria.sNomeCategoria
         << "\nSetor: " << pVetor->VarSetor.sSetor
         << "\nCódigo do Edifício: " << pVetor->VarLocal.iCodLocal
         << "\nNome do Edifício: " << pVetor->VarLocal.sNomeLocal
         << "\nNúmero da Sala: " << pVetor->sSalaRamal
         << "\nResponsável pelo Ramal: " << pVetor->sRespRamal
         << "\nResponsável pelo Ateste: " << pVetor->sRespAteste << "\n";
}

bool VerificaRamal(CadRamal *pVetor, int &pRamal) {
    for (int i = 0; i < iTam; i++) {
        if (pVetor->iNumRamal == pRamal) {
            return false;
        }
        pVetor++;
    }
    return true;
}

bool VerificaAuxiliares(CadRamal *pVetor, string pAuxiliar, int &pRamal) {
    for (int i = 0; i < iTam; i++) {
        if (pVetor->VarSetor.sSetor == pAuxiliar || 
            pVetor->VarLocal.sNomeLocal == pAuxiliar ||
            pVetor->sRespRamal == pAuxiliar ||
            pVetor->sRespAteste == pAuxiliar) {
            pRamal = i;
            return false;
        }
        pVetor++;
    }
    return true;
}
