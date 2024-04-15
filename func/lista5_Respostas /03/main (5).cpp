#include <iostream>

bool perfect(int num) {
    int soma = 1; // Iniciamos com 1 porque todo número é divisível por 1

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            soma += i;
            if (i != num / i) {
                soma += num / i;
            }
        }
    }

    return soma == num;
}
