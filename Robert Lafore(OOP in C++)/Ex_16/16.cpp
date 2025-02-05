/*Imagine an enumerated type with values that indicate an employee type within an organization:
enum etype { laborer, secretary, manager, accountant, executive,researcher };
Write a program that first allows the user to specify a type by entering its first letter(‘l’, ‘s’, ‘m’, and so on),
then stores the type chosen as a value of a variable of typeenum etype, and finally displays the complete word for this type.
*/
#include <iostream>
using namespace std;

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main() {
    char choice;
    etype emp_type;
    cout << "Enter employee type. Make sure you enter first letter only:\n";
    cout << "laborer, secretary, manager, accountant, executive, researcher: ";
    cin >> choice;

    switch (choice) {
        case 'l':
        case 'L':
            emp_type = laborer;
            break;
        case 's':
        case 'S':
            emp_type = secretary;
            break;
        case 'm':
        case 'M':
            emp_type = manager;
            break;
        case 'a':
        case 'A':
            emp_type = accountant;
            break;
        case 'e':
        case 'E':
            emp_type = executive;
            break;
        case 'r':
        case 'R':
            emp_type = researcher;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    switch (emp_type) {
        case laborer:
            cout << "Employee type is laborer." << endl;
            break;
        case secretary:
            cout << "Employee type is secretary." << endl;
            break;
        case manager:
            cout << "Employee type is manager." << endl;
            break;
        case accountant:
            cout << "Employee type is accountant." << endl;
            break;
        case executive:
            cout << "Employee type is executive." << endl;
            break;
        case researcher:
            cout << "Employee type is researcher." << endl;
            break;
    }

    return 0;
}
