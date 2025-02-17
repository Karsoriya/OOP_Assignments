#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 0, double w = 0) { 
        length = l;
        width = w;
    }

    // Setter functions
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }

    // Getter functions
    double getLength() { return length; }
    double getWidth() { return width; }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle myRectangle; 
    double l, w;
    
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter width of the rectangle: ";
    cin >> w;
    
    myRectangle.setLength(l);
    myRectangle.setWidth(w);
    
    cout << "The area of the rectangle is: " << myRectangle.calculateArea() << endl;
    
    return 0;
}
