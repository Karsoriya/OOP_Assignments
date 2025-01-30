#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double real1, imag1, real2, imag2;
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    // Calculating  magnitudes 
    double magnitude1 = sqrt(pow(real1, 2) + pow(imag1, 2));
    double magnitude2 = sqrt(pow(real2, 2) + pow(imag2, 2));
    
    cout <<"Magnitude of first complex number is :"<< magnitude1<<endl;
    cout <<"Magnitude of second complex number is:"<<magnitude2<<endl;

    // here comparing magnitudes of the two complex numbers
    if (magnitude1 > magnitude2) {
        cout << "The first complex number has a higher magnitude.";
    }
    else if (magnitude1 < magnitude2) {
        cout << "The second complex number has a higher magnitude." ;
    }
    else {
        cout << "Equal" << endl;
    }

    return 0;
}
