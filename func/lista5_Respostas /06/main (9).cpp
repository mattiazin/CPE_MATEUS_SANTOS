#include <iostream>

void moveDisco(int numDiscos, int estacaOrigem, int estacaDestino, int estacaTemporaria) {
    if (numDiscos == 1) {
        std::cout << estacaOrigem << " → " << estacaDestino << std::endl;
        return;
    }

    moveDisco(numDiscos - 1, estacaOrigem, estacaTemporaria, estacaDestino);
    std::cout << estacaOrigem << " → " << estacaDestino << std::endl;
    moveDisco(numDiscos - 1, estacaTemporaria, estacaDestino, estacaOrigem);
}

int main() {
    int numDiscos;
    std::cout << "Digite o número de discos: ";
    std::cin >> numDiscos;

    std::cout << "Instruções para mover os discos:" << std::endl;
    moveDisco(numDiscos, 1, 3, 2);

    return 0;
}
