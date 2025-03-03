#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;  // If divisible by any number, it's not prime
    }
    return true;  // If no divisors found, it's prime
}

int main() {
    cout << "Prime numbers between 1 and 100 are:" << endl;
    for (int num = 2; num <= 100; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
