#include <iostream>
#include <iomanip> // Para std::setprecision

double celsius_para_fahrenheit(double celsius) {
    double fahrenheit = (9.0/5.0) * celsius + 32.0;
    return fahrenheit;
}

int main() {
    std::cout << "Celsius\tFahrenheit\n"; // Cabeçalho da tabela
    
    for (int celsius = 0; celsius <= 100; celsius += 10) {
        double fahrenheit = celsius_para_fahrenheit(celsius);
        std::cout << std::fixed << std::setprecision(1); // Define a precisão para uma casa decimal
        std::cout << celsius << "\t" << fahrenheit << "\n"; // Imprime os valores em formato tabular
    }
    
    return 0;
}
