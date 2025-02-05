/* C++ program that defines a struct called time, asks the user for hours, minutes, and seconds
and then calculates the total number of seconds.
*/
#include <iostream>
using namespace std;

struct Time { 
    int hours;
    int minutes;                  
    int seconds;
};

int main() {
    Time t;
    
    // Prompt user for input
    cout << "Enter hours: ";
    cin >> t.hours;
    cout << "Enter minutes: ";
    cin >> t.minutes;
    cout << "Enter seconds: ";
    cin >> t.seconds;
    
    // Calculate total seconds
    long totalsecs = t.hours * 3600 + t.minutes * 60 + t.seconds;
    
    // Display the result
    cout << "Total seconds: " << totalsecs << endl;
    
    return 0;
}
