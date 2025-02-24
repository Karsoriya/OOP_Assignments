/*Write a class Currency with integer attributes rupees and paise. Overload + and - operators to perform addition and subtraction of two Currency objects.
*/
#include <iostream>
using namespace std;

class Currency {
private:
    int rupees, paise;

    // Function to normalize values (convert 100 paise to 1 rupee)
    void normalize() {
        if (paise >= 100) {
            rupees += paise / 100;
            paise %= 100;
        } else if (paise < 0) {
            int borrow = (abs(paise) + 99) / 100;
            rupees -= borrow;
            paise += borrow * 100;
        }
    }

public:
    // Constructor
    Currency(int r = 0, int p = 0) : rupees(r), paise(p) {
        normalize();
    }

    // Overloading + operator for addition
    Currency operator+(const Currency &c) const {
        return Currency(rupees + c.rupees, paise + c.paise);
    }

    // Overloading - operator for subtraction
    Currency operator-(const Currency &c) const {
        return Currency(rupees - c.rupees, paise - c.paise);
    }

    // Function to take user input
    void input() {
        cout << "Enter rupees and paise: ";
        cin >> rupees >> paise;
        normalize();
    }

    // Function to display currency
    void display() const {
        cout << "Currency: Rs. " << rupees << " and " << paise << " paise" << endl;
    }
};

int main() {
    Currency c1, c2;
    
    cout << "Enter first currency amount:" << endl;
    c1.input();
    
    cout << "Enter second currency amount:" << endl;
    c2.input();
    
    Currency sum = c1 + c2;
    Currency diff = c1 - c2;
    
    cout << "After addition: ";
    sum.display();
    
    cout << "After subtraction: ";
    diff.display();
    
    return 0;
}