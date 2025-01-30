//Generate a sequence of multiples of a positive integer
#include <iostream>

using namespace std;

int main() {
    int number;
    int i, j ;
    cout << "Enter a positive integer : ";
    cin >> number;

    for (i = 1; i <= 20; ++i) {
        for ( j = 1; j <= 10; ++j) {
            cout  << number * ((i - 1) * 10 + j)<<"\t";
           
        }
        
    }
    return 0;
}
        
