/*Program to Demonstrate the concept of Function Overloading. Create a class with name shapes, create a function with name Area(), with Area
function, calculate Area of Circle, Area of Rectangle, Area of Triangle, using function overloading.
IN CPP*/

#include <iostream>
using namespace std;

class Shapes {
public:

    double Area(double radius) { 
        return 3.14159 * radius * radius;
    }

    double Area(double length, double width) {
        return length * width;
    }

    double Area(double base, double height,bool isTriangle) { /*NOTE for myself: compiler was returning error for double declaration
                                                               of area so I added a 3rd parameter bool isTriangle to solve it*/   
        if(isTriangle){
        return 0.5 * base * height;
    }
    }
}

//note for myself: the code does not include a switch case so an input for each varaible will be taken on execution.

int main() {
    Shapes shape;

    double radius, length, width, base, height;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Area: " << shape.Area(radius) << endl;
    cout << "Area: " << shape.Area(length, width) << endl;
    cout << "Area: " << shape.Area(base, height) << endl;

    return 0;
}
