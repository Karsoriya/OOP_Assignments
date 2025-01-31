#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int choice;
    int num1, num2;

    do {
        // Display the menu
        cout << "Menu:\n";
        cout << "Press 1 to find the factorial of a number\n";
        cout << "Press 2 to find the GCD of two numbers\n";
        cout << "Press 3 to find the LCM of two numbers\n";
        cout << "Press 4 to Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Find the factorial of a number
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Factorial of " << num1 << " is " << factorial(num1)<<endl;
                break;
            
            case 2:
                // Find the GCD of two numbers
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            
            case 3:
                // Find the LCM of two numbers
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;
                break;

            case 4:
                cout << "Exiting the program.\n";
                break;
            
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4); // Repeat until the user chooses to exit

    return 0;
}
