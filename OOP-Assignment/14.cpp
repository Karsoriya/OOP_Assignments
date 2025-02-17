#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called: Rectangle with length = " << length << " and width = " << width << endl;
    }

    // Parameterized constructor - accepts length and width as arguments
    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called: Rectangle with length = " << length << " and width = " << width << endl;
    }

    // Function to calculate the perimeter of the rectangle
    float calculatePerimeter() {
        return 2 * (length + width);  // Perimeter formula: P = 2 * (length + width)
    }

    // Function to take input from the user
    void inputDimensions() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
};

int main() {
    // Using the default constructor
    Rectangle rect1;  // Default constructor is called
    cout << "Perimeter of rect1: " << rect1.calculatePerimeter() << endl;

    // Using the parameterized constructor with user input
    float length, width;
    cout << "Enter the length and width for a new rectangle: ";
    cin >> length >> width;
    Rectangle rect2(length, width);  // Parameterized constructor is called
    cout << "Perimeter of rect2: " << rect2.calculatePerimeter() << endl;

    // Using the inputDimensions function for another rectangle
    Rectangle rect3;
    rect3.inputDimensions();  // Takes input from the user
    cout << "Perimeter of rect3: " << rect3.calculatePerimeter()<<endl;
    return 0 ;
}

