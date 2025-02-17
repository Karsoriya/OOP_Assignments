#include <iostream>
#include <cmath> 

class Circle {
private:
    double radius;

public:
    Circle(double r = 0) { radius = r; }

    // Function to set radius
    void Radius(double r) { radius = r; }

    // Function to calculate area
    double calculateArea() {
        return M_PI * radius * radius;
    }
};

int main() {
    Circle circle; 
    double r;
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    
    circle.Radius(r);
    
    std::cout << "The area of the circle is: " << circle.calculateArea() << std::endl;
    
    return 0;
}