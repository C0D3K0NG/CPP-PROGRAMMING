/*
Enter a number: 5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
*/
#include<iostream>
using namespace std;
int fact(int n){
  int fac=1;
  for(int i=1;i<=n;i++){
    fac*=i;
  }
  return fac;
}
int main(){
  int c;
  cout<<"Enter a number: ";
  cin>>c;
  for(int i=0;i<c;i++){
    for(int k=0;k<(c-i);k++)
    cout<<"  ";
    for(int j=0;j<=i;j++){
      int val=fact(i)/(fact(j)*fact(i-j));
      cout<<val<<"   ";
    }
    cout<<"\n";
  }
}