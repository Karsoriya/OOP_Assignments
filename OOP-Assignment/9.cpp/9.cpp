#include<iostream>
using namespace std ;

int main(){
    int num , i , flag=1;
    cout<<"Enter the number:\n";
    cin>>num;
    if(num<=1){
        cout<<"Number must be greater than 1 to be prime ."<<endl;
        return 0 ;
    }
    for(i=2; i <= num-1 ; i++){
      if(num % i==0){  
          cout<<"Not a prime number."<<endl;
          flag=0;
          break;
      }
    
    }
    
    if(flag== 1) {
        cout<<"Its a prime number."<<num<<endl;
    }  
    
    return 0 ;
}