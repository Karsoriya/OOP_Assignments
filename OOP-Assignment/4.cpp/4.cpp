#include<iostream>
using namespace std;

int main(){
    int x ;
    cout<<"Enter 1 to display Monday : 2 to display Tuesday : 3 to display Wednesday : 4 to display Thursday : 5 to display Friday : 6 ti display  Saturday : 7 to display Sunday \n";
    cin>>x ;
    switch (x)
    {
    case 1:
        cout<<"Monday";
        break;
     case 2:
        cout<<"Tuesday";
        break;
     case 3:
        cout<<"Wednaesday";
        break;
     case 4:
        cout<<"Thusrday";
        break;
     case 5:
        cout<<"Friday";
        break;
     case 6:
        cout<<"Saturday";
        break;
     case 7:
        cout<<"sunday";
        break;
    
    
    default:
        cout<<"Invalid Input";
        break;
    }
return 0 ;

}