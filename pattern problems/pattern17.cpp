/*
Enter a number: 5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
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
    for(int k=i;k>1;k--)
    cout<<k<<" ";
    for(int l=1;l<=i;l++)
    cout<<l<<" ";
    cout<<"\n";
  }
}