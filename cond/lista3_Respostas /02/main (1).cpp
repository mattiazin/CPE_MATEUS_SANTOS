#include <iostream>

int main() {
    double precoAlcool, precoGasolina;
    
    std::cout << "Digite o preço do litro do álcool: ";
    std::cin >> precoAlcool;
    
    std::cout << "Digite o preço do litro da gasolina: ";
    std::cin >> precoGasolina;
    
    double razao = precoAlcool / precoGasolina;
    
    if (razao <= 0.7) {
        std::cout << "Recomendação: Abasteça com álcool.\n";
    } else {
        std::cout << "Recomendação: Abasteça com gasolina.\n";
    }
    
    return 0;
}
