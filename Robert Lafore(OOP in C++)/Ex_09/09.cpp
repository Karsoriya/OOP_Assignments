#include <iostream>
using namespace std;

double calculate_Tax(double income) {
    double tax = 0;
/*No tax for income <= Rs2,50,000:
  5% for income between Rs2,50,001 and Rs5,00,000:
  20% for income between Rs5,00,001 and Rs10,00,000:
  30% for income above Rs10,00,000:
*/
    if (income <= 250000) {
        tax = 0;  
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;   
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.20 + (250000 * 0.05); 
    } else {  tax = (income - 1000000) * 0.30 + (500000 * 0.20) + (250000 * 0.05);   
    }

    return tax;
}

int main() {
    double income,tax_amount;
    
    // Input: Annual income
    cout << "Enter your annual income: Rs";
    cin >> income;

    // Calculate and display the tax
    tax_amount = calculate_Tax(income);
    cout << "Your income tax is: Rs" << tax_amount << endl;

    return 0;
}
