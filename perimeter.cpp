#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    // Function to take input from the user
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Function to calculate area
    float area() {
        return length * breadth;
    }

    // Function to calculate perimeter
    float perimeter() {
        return 2 * (length + breadth);
    }

    // Function to display rectangle details
    void display() {
        cout << "\nRectangle Details:" << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle r1;  

    r1.input();    
  r1.display();  

    return 0;
}
