#include <iostream>

using namespace std;

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int num = 2; num <= 1000; num++) {
        if (ehPrimo(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
