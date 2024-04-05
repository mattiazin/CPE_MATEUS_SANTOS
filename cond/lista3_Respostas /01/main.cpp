#include <iostream>

int main() {
    int numEnchidas;
    std::cout << "Quantas vezes o tanque foi enchido? ";
    std::cin >> numEnchidas;

    double totalKm = 0;
    double totalLitros = 0;

    for (int i = 1; i <= numEnchidas; ++i) {
        double litros, km;
        std::cout << "Enchida #" << i << ": Quantidade de litros: ";
        std::cin >> litros;
        std::cout << "Enchida #" << i << ": Quilômetros percorridos: ";
        std::cin >> km;

        double consumo = km / litros;
        std::cout << "Consumo do tanque #" << i << ": " << consumo << " km/l\n";

        totalKm += km;
        totalLitros += litros;
    }

    if (totalLitros > 0) {
        double mediaConsumo = totalKm / totalLitros;
        std::cout << "Média de consumo: " << mediaConsumo << " km/l\n";
    } else {
        std::cout << "Nenhuma entrada válida.\n";
    }

    return 0;
}
