#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if(age<=0)
        cout<<"Error";
    else if (age<=12)
        cout<<"You are a child\n";
    else if (age>12 && age<=18)
        cout<<"You are a teenager\n";
    else if(age>18 && age<60)
        cout<<"You are an adult\n";
    else
        cout<<"You are a senior citizen\n";

    return 0;
}
