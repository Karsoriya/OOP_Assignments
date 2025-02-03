/* Write a function that takes two Distance values as arguments and returns the larger one.
 Include a main() program that accepts two Distance values from the user, compares
 them, and displays the larger.
 */
#include <iostream>

using namespace std;

struct Distance {
    int feet;
    float inches;
};

// Function to compare two Distance values and return the larger one
Distance largerDistance(Distance d1, Distance d2) {
    // Converting both distances to inches for easy comparison
    float totalInches1 = d1.feet * 12 + d1.inches;
    float totalInches2 = d2.feet * 12 + d2.inches;

    return (totalInches1 >= totalInches2) ? d1 : d2;
}

int main() {
    Distance d1, d2, larger;
    cout << "Enter first distance (feet inches): ";
    cin >> d1.feet >> d1.inches;

    cout << "Enter second distance (feet inches): ";
    cin >> d2.feet >> d2.inches;

    // Call function to find the larger distance
    larger = largerDistance(d1, d2);

    // Display the larger distance
    cout << "The larger distance is: " << larger.feet << " feet " << larger.inches << " inches" << endl;
    
    return 0;
}
