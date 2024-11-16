#include <iostream>
using namespace std ;
int main() {
     for ( ; ; ) {
        int input;
        cout << "\nEnter 1 for Non-Veg : 2 for Veg\n :  Anything else to exit: ";
        cin >> input;
        switch ( input ) {
          case 1: {
            int nonVeg;
            cout << "Enter 1 for Kebab : 2 for Steak: 3 for Fish   :  Press any key to go back ";
            cin>>nonVeg;
            switch ( nonVeg ) {
               case 1:
                cout << "You ordered Kebab.\n";
                break;
               case 2:
                cout << "You ordered Steak.\n";
                break;
               case 3:
                cout << "You ordered Fish.\n";
                break;
               default:
                break;
                }
         }
          case 2:
          {
            int veg;
            cout << "Enter 1 for Salad : 2 for Dal:3 for  Samosa : anything else to go back: ";
            cin >> veg;
            switch ( veg ) {
            case 1:
              cout<< "You ordered Salad.\n";
              break;
             case 2:
               cout << "You ordered Daal.\n";
               break;
             case 3:
               cout << "You ordered Samosa.\n";
               break;
             default:
               break;
          }
            break;
       }
           default:
             cout << "Exiting now.\n";
             return 0;
             break;
          }
        }

   return 0;
}