 /*Use for loops to construct a program that displays a pyramid of Xs on the screen. The
 pyramid should look like this
     X
    XXX
   XXXXX
  XXXXXXX
 XXXXXXXXX
 */
#include<iostream>
using namespace std;
int main() {
  int i,n,j,k;
  cout<<"enter n ";
  cin>>n;
  for(i=1;i<=n;i++)
    { 
      for(j=1;j<=n-i;j++)
        cout<<" ";
      for(k=1;k<=(2*i)-1;++k)
        cout<< "X";
        cout<<endl;
    }

  return 0;
}