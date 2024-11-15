#include<iostream>

using namespace std;
int main(){
    double MO,MM ;
    float Percentage;
    cout<<"Enter the marks you obtained:\n";
    cin>>MO;
    cout<<"Enter total marks :\n" ;
    cin>>MM ;
    Percentage =((MO/MM)*100);
    if(Percentage<=100 && Percentage>=90)
        cout<<"You got A Grade";
    else if (Percentage<90 && Percentage>=80)
        cout<<"You got Grade B ";
    else if (Percentage<80 && Percentage>=70)
        cout<<"You got Grade C";
    else if (Percentage<70 && Percentage>=60)
        cout<<"You got Grade D";
    else if (Percentage<60)
        cout<<"You Failed.Try Next Time";

    return 0;
}
