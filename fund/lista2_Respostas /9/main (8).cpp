#include <iostream>

int main() {
    // Definindo as taxas por quilômetro
    const double taxa1 = 1.75;  // Até os primeiros 50 km
    const double taxa2 = 1.65;  // Para os 100 km seguintes
    const double taxa3 = 1.50;  // Acima de 150 km

    // Definindo os limites de cada taxa
    const int limite1 = 50;
    const int limite2 = 150;

    // Variável para armazenar a distância em quilômetros
    int distancia_km;

    // Solicita ao usuário que digite a distância em quilômetros
    std::cout << "Digite a distância em quilômetros: ";
    std::cin >> distancia_km;

    // Calcula o custo total do aluguel
    double custo_total;
    if (distancia_km <= limite1) {
        custo_total = distancia_km * taxa1;
    } else if (distancia_km <= limite2) {
        custo_total = limite1 * taxa1 + (distancia_km - limite1) * taxa2;
    } else {
        custo_total = limite1 * taxa1 + (limite2 - limite1) * taxa2 + (distancia_km - limite2) * taxa3;
    }

    // Calcula o custo médio por quilômetro
    double custo_medio_por_km = custo_total / distancia_km;

    // Exibe o valor total a pagar e o custo médio por quilômetro
    std::cout << "O valor total a pagar é: R$ " << custo_total << std::endl;
    std::cout << "O custo médio por quilômetro é: R$ " << custo_medio_por_km << std::endl;

    return 0;
}
