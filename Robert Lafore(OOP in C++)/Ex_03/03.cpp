#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discount, finalAmount;
    cout << "Enter purchase amount: Rs ";
    cin >> purchaseAmount;
    
    if (purchaseAmount < 100) {
        discount = 0;
    }
     else if (purchaseAmount <= 500) {
        discount = 0.10;
    } 
    else if (purchaseAmount <= 1000) {
        discount = 0.15;
    } 
    else {
        discount = 0.20;
    }
    
    finalAmount = purchaseAmount - (purchaseAmount * discount);

    cout << "Discount Applied: " << discount * 100 << "%" << endl;
    cout << "Total Price After Discount: Rs " << finalAmount << endl;
    
    return 0;
}
