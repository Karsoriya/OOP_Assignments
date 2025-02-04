/*
 Create a structure called employee that contains two members: an employee number
 (type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
 in this data for three employees, store it in three variables of type struct employee, and
 then display the information for each employee
*/
#include <iostream>
using namespace std;

struct Employee {
    int empNumber;
    float compensation;
};

int main() {
    Employee employees[3]; 
    bool duplicate;
    for (int i = 0; i < 3; i++) {
        while (true) {
            cout << "Enter employee number and compensation for Employee " << (i + 1) << ": ";
            cin >> employees[i].empNumber >> employees[i].compensation;
            
            duplicate = false;
            for (int j = 0; j < i; j++) {
                if (employees[j].empNumber == employees[i].empNumber) {
                    duplicate = true;
                    break;
                }
            }

            if (duplicate) {
                cout << "Error: Duplicate employee number found. Please check your entries and try again.\n";
            } else {
                break;
            }
        }
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Employee " << (i + 1) << " - Number: " << employees[i].empNumber << ", Compensation: $" << employees[i].compensation << endl;
    }

    return 0;
}
