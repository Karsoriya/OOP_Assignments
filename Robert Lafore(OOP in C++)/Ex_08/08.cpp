// Program to find and print all pairs(x,y) such that: x^2+y^2=n
#include <iostream>
#include <cmath>

using namespace std;

void pairs(int n) {
    int limit ,y , sum;
    limit = sqrt(n); 

    for (int x = 0; x <= limit; x++) {
        for ( y = x; y <= limit; y++) { 
            sum = x * x + y * y;

            if (sum > n) {
                break; // Stop the inner loop early if sum exceeds n
            }

            if (sum == n) {
                cout << "(" << x << ", " << y << ")\n";                
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << ":\n";
    pairs(n);

    return 0;
}
