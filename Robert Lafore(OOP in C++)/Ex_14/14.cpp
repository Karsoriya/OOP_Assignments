/* Write a program that calculates the number of possible arrangements for any number of guests and any number of
 chairs. (Assume there will never be fewer guests than chairs.)
*/

#include <iostream>
using namespace std;

// Function to calculate permutations (nPr)
long long permutations(int g, int c) {
    long long result = 1;
    for (int i = 0; i < c; i++) {
        result *= (g - i);
    }
    return result;
}

int main() {
    int guests, chairs;
    
    
    cout << "Enter the number of guests: ";
    cin >> guests;
    cout << "Enter the number of chairs: ";
    cin >> chairs;
    
    if (guests < chairs) {
        cout << "Number of guests must be greater than or equal to the number of chairs!" << endl;
        return 1;
    }
    
    cout << "Number of possible arrangements: " << permutations(guests, chairs) << endl;
    
    return 0;
}
