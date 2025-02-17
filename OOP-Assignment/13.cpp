#include <iostream>
using namespace std;

class Triangle {
    private:
    float base;
    float height;

public:
    // Constructor to initialize base and height
    Triangle(float b, float h) {
        base = b;
        height = h;
        cout << "Triangle object created with base = " << base << " and height = " << height << endl;
    }

    // Function to calculate the area of the triangle
    float calculateArea() {
        return (1.0/2.0) * base * height;
    }

    // Destructor to display a message when the object is destroyed
    ~Triangle() {
        cout << "Triangle object with base = " << base << " and height = " << height << " is being destroyed" << endl;
    }
};

int main() {
    Triangle t(10, 5);

    cout << "Area of the triangle: " << t.calculateArea() << endl;

    return 0;
}
