/*Write a C++ program that defines a class Complex with two integer attributes (real, imag). 
Overload the + operator to add two complex numbers and display the result.
*/
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to take input
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
};

int main() {
    Complex c1, c2;
    
    cout << "Enter first complex number:" << endl;
    c1.input();
    
    cout << "Enter second complex number:" << endl;
    c2.input();
    
    Complex c3 = c1 + c2; // Adding two complex numbers

    cout << "First complex number: ";
    c1.display();
    
    cout << "Second complex number: ";
    c2.display();
    
    cout << "Sum: ";
    c3.display();
    
    return 0;
}