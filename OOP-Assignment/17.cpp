/*Develop a class Box with attributes (length, width, height). Overload the > operator to 
compare two Box objects based on volume and print whether one is larger than the other.
*/
#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Constructor to initialize box dimensions
    Box(double l = 0, double w = 0, double h = 0) : length(l), width(w), height(h) {}

    double volume() const {
        return length * width * height;
    }

    // Overloading the > operator to compare volumes
    bool operator>(const Box &b) const {
        return this->volume() > b.volume();
    }

    void input() {
        cout << "Enter length, width, and height: ";
        cin >> length >> width >> height;
    }
};

int main() {
    Box box1, box2;
    
    cout << "Enter dimensions for Box 1:" << endl;
    box1.input();
    
    cout << "Enter dimensions for Box 2:" << endl;
    box2.input();
    
    if (box1 > box2)
        cout << "Box 1 is larger than Box 2." << endl;
    else if (box2 > box1)
        cout << "Box 2 is larger than Box 1." << endl;
    else
        cout << "Both boxes have the same volume." << endl;
    
    return 0;
}
