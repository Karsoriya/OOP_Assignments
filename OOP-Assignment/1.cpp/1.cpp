#include<iostream>
using namespace std;

int main(){
    int variable;
    cout<<"Enter an integer:\n";
    cin>>variable;
    if(variable>0)
        cout<<"It's a positive number.\n";
    else if(variable<0)
        cout<<"It's a negative number.\n";
    else
        cout<<"The number you entered is Zero.\n";

    return 0;
}
