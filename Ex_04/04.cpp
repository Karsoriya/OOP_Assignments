#include <iostream>
using namespace std;

int main() {
    int num, start, end;

    // First checking if a single number is a palindrome
    cout << "Enter a number to check if it is a palindrome: ";
    cin >> num;
    
    int original_Num = num, reversed_Num = 0, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        reversed_Num = (reversed_Num * 10) + remainder;
        num /= 10;
    }
    
    if (original_Num == reversed_Num) {
        cout << original_Num << " is a palindrome." << endl;
    } else {
        cout << original_Num << " is not a palindrome." << endl;
    }
    
    // Print all palindromes in a given range
    cout << "Enter the range (start end): ";
    cin >> start >> end;
    
    cout << "Palindrome numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        int temp = i, rev = 0;
        while (temp > 0) {
            remainder = temp % 10;
            rev = (rev * 10) + remainder;
            temp /= 10;
        }
        if (i == rev) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
