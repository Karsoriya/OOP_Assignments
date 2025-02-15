#include <iostream>
#include <algorithm> 
using namespace std; 

void rev_string(string &str) {
    reverse(str.begin(), str.end());
}

void reverseString(string &original) {
    int i = 0, j = original.length() - 1;
    while (i < j) {
        swap(original[i], original[j]);
        i++;
        j--;
    }
}

int main() {
    string input = "hello";
    rev_string(input);
    cout << "Reversed string: " << input << endl;
    string original = "Hey";
    reverseString(original);
    cout << "Reversed string: " << original << std::endl;
    return 0;
}
