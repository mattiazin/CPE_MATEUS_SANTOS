#include <iostream>

double celsius_para_fahrenheit(double celsius) {
    double fahrenheit = (9.0/5.0) * celsius + 32.0;
    return fahrenheit;
}

int main() {
    double celsius;
    std::cout << "Digite a temperatura em Celsius: ";
    std::cin >> celsius;
    
    double fahrenheit = celsius_para_fahrenheit(celsius);
    std::cout << "A temperatura em Fahrenheit é: " << fahrenheit << std::endl;
    
    return 0;
}
