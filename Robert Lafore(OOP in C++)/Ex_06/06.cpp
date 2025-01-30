#include <iostream>
using namespace std;

void num_pyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int num_rows;
    cout << "Enter the number of rows: ";
    cin >> num_rows;
    num_pyramid(num_rows);
    return 0;
}
