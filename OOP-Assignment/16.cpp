/*Create a class Vector with two integer attributes (x, y). Overload the unary - operator to negate 
both coordinates and print the result.  in c++ input from user
*/
#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    // Constructor
    Vector(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

    // Overloading the unary - operator
    Vector operator-() {
        return Vector(-x, -y);
    }

    // Function to take input
    void input() {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }

    // Function to display the vector
    void display() {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1;
    
    // Taking user input
    cout << "Enter vector coordinates:" << endl;
    v1.input();
    
    // Negating the vector
    Vector v2 = -v1;
    
    // Display results
    cout << "Original ";
    v1.display();
    cout << "Negated ";
    v2.display();
    
    return 0;
}
