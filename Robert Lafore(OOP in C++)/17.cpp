/* Implement a function generateEvenNumbers(int n) that returns an array of the first n even numbers. 
Use dynamic memory allocation (new keyword).
*/
#include <iostream>
using namespace std;

int* generateEvenNumbers(int n) {
    int* even_num = new int[n]; 
    for (int i = 0; i < n; i++) {
        even_num[i] = 2 * (i + 1); 
    }
    return even_num;
}

int main() {
    int x;
    cout << "Enter the number of even numbers to generate: ";
    cin >> x;

    // Generate even numbers
    int* even_Array = generateEvenNumbers(x);

    // Display the even numbers
    cout << "The first " << x << " even numbers are: ";
    for (int i = 0; i < x; i++) {
        cout << even_Array[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] even_Array;

    return 0;
}
