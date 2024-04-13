#include <iostream>

int main() {
    // Definindo os preços dos produtos
    double precoProduto1 = 2.98;
    double precoProduto2 = 4.50;
    double precoProduto3 = 9.98;
    double precoProduto4 = 4.49;
    double precoProduto5 = 6.87;

    int numeroProduto;
    int quantidadeVendida;
    double totalVenda = 0.0;

    // Loop para ler pares de números até que o usuário decida parar
    while (true) {
        // Lendo número do produto e quantidade vendida
        std::cout << "Digite o número do produto (1-5) ou 0 para parar: ";
        std::cin >> numeroProduto;

        // Verificando se o usuário deseja parar
        if (numeroProduto == 0) {
            break;
        }

        std::cout << "Digite a quantidade vendida: ";
        std::cin >> quantidadeVendida;

        // Calculando o valor total para o produto atual
        double totalProduto = 0.0;
        switch (numeroProduto) {
            case 1:
                totalProduto = precoProduto1 * quantidadeVendida;
                break;
            case 2:
                totalProduto = precoProduto2 * quantidadeVendida;
                break;
            case 3:
                totalProduto = precoProduto3 * quantidadeVendida;
                break;
            case 4:
                totalProduto = precoProduto4 * quantidadeVendida;
                break;
            case 5:
                totalProduto = precoProduto5 * quantidadeVendida;
                break;
            default:
                std::cout << "Número de produto inválido.\n";
                continue;  // Reinicia o loop para o próximo par de números
        }

        // Somando ao total de vendas
        totalVenda += totalProduto;
    }

    // Exibindo o total de vendas
    std::cout << "Total de vendas: R$" << totalVenda << std::endl;

    return 0;
}
