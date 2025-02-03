#include <iostream>

using namespace std;

// Function to set the smaller of two numbers to 0
void zeroSmaller(int &a, int &b) {
    if (a < b) {
        a = 0;  
    } else if (b < a) {
        b = 0; 
    }

}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before calling zeroSmaller(): num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call function
    zeroSmaller(num1, num2);

    cout << "After calling zeroSmaller(): num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
