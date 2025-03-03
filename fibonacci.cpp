#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number greater than 0."<<endl;
        return 1;
    }

    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}
