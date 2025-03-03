#include<iostream>
using namespace std;

class Program {
public:
    Program(string username, int pin) {
        cout << "\n Username = " << username;
        cout << "\n Pin = " << pin;
    }
};

int main() {
    string username;
    int pin;
 
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Pin: ";
    cin >> pin;

    Program obj1(username, pin);

    cout << "\nEnter Username for second object: ";
    cin >> username;
    
    cout << "Enter Pin for second object: ";
    
    Program obj2(username, pin);

    return 0;
    }