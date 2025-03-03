#include <iostream>
using namespace std;

class Shapes {
private:
    double length, width;  // Data members

 public:
   Shapes(double l, double w) {
        length = l;
        width = w;
    }

    double Area() {
        return length * width;
    }
};

int main() {
    double length, width;
    
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    Shapes shape(length, width);

    cout << "Area: " << shape.Area() << endl;

    return 0;
}
