#include <iostream>

using namespace std;

bool ehPrimo(int num) {
  // ... (mesma função de a)
}

int main() {
  for (int num = 2; num <= 1000; num++) {
    if (ehPrimo(num)) {
      cout << num << " ";
    }
  }

  return 0;
}
