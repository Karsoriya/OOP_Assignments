#include <iostream>
using namespace std ;
int main() {
        cout << "Enter a character: ";
        char c{};
        cin >> c;

        if ( c >= 'A' && c <= 'Z' ) {
             c += 'a' - 'A';
        }

        switch ( c ) {
                case 'a': case 'e' : case 'i': case 'o': case 'u':
                    cout << c << " is a vowel.";
                    break;
                default:
                    cout << c << " is a consonant.";
                    break;
        }
    return 0;
}