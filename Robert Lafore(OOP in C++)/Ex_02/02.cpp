// Program for Temperature conversion
#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, Temperature;

    cout << "Press 1 to convert Fahrenheit to Celsius or press 2 to convert Celsius to Fahrenheit: ";
    cin >> choice;


    if (choice == 1)
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temperature;
        Temperature = (temperature - 32) * 5.0 / 9.0;
        cout << "The temperature in Celsius is: " << Temperature << "C" <<endl ;
    } else if (choice == 2) {
        // Celsius to Fahrenheit
        cout << "Enter the temperature in Celsius: ";
        cin >> temperature;
        Temperature = (temperature * 9.0 / 5.0) + 32;
        cout << "The temperature in Fahrenheit is: " << Temperature << "F" <<endl ;
    } else {

        cout << "Invalid choice." << endl;
    }

    return 0;
}
