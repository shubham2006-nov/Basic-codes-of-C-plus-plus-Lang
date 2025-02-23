#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate area
    double area() {
        return length * width;
    }

    // Method to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }

    // Method to display dimensions
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect(10.0, 5.0);

    // Display dimensions
    rect.display();

    // Display area
    cout << "Area: " << rect.area() << endl;

    // Display perimeter
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}