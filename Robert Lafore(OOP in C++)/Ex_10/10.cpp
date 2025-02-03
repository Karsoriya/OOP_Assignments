/*
 Write a function that, when you call it, displays a message telling how many times it has
 been called: “I have been called 3 times”, for instance. Write a main() program that calls
 this function at least 10 times. Try implementing this function in two different ways.
 First, use a global variable to store the count. Second, use a local static variable.
*/
// First using a global variable
#include <iostream>

using namespace std;

// First using Global variable
int g_count = 0;

// Function using a global variable
void Global() {
    g_count++; 
    cout << "Global function: I have been called " << g_count << " times" << endl;
}

// Function using a local static variable
void Static() {
    static int s_count = 0;  // Local static variable
    s_count++;  
    cout << "Static Counter: I have been called " << s_count << " times" << endl;
}

int main() {
    cout << "Calling the function with a GLOBAL variable:\n";
    for (int i = 0; i < 10; i++) {
        Global();
    }

    cout << "Calling the function with a LOCAL STATIC variable:\n";
    for (int i = 0; i < 10; i++) {
        Static();
    }

    return 0;
}


