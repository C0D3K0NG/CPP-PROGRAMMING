/*
Enter a number: 4
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++)
    cout<<"  ";
    for(int k=1;k<=(i*2)-1;k++)
    cout<<"* ";
    cout<<"\n";
  }
  for(int i=n;i>=1;i--){
    for(int j=1;j<=(n-i);j++)
    cout<<"  ";
    for(int k=1;k<=(i*2)-1;k++)
    cout<<"* ";
    cout<<"\n";
  }
}