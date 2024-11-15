#include <iostream>

using namespace std ;
int main(){

    double num1 , num2 , answer;
    char operation;
    bool flag = 1;
    cout<<"Enter first number.\n";
    cin>>num1;
    cout<<"Enter second number.\n";
    cin>>num2;
    cout<<"Choose the mathematical operator as shown \n +  ,  -  ,  *  ,  / \n";
    cin>>operation;
    if(operation =='+')
        answer = num1 + num2;
    else if(operation == '-')
        answer = num1 - num2;
    else if(operation == '*')
        answer = num1*num2;
    else if (operation == '/'){
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed.\n";
        flag = 0;
    }
    else {
        answer = num1 / num2;
    }
}

    else{
        cout<<"Invalid choice\n";
        flag = 0;
    }
    if(flag == 1) {
        cout<<"output is : "<< answer << endl ;
    }
return 0;
}
