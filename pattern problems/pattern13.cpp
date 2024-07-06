/*
Enter a Number: 4
 *                    *
 *  *              *  *
 *  *  *        *  *  *
 *  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *
 *  *  *        *  *  *
 *  *              *  *
 *                    *
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number: ";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<" * ";
    }
    for(int l=1;l<=(n-i)*2;l++)
    cout<<"   ";
    for(int j=1;j<=i;j++){
      cout<<" * ";
    }
    cout<<"\n";
  }
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<" * ";
    }
    for(int l=1;l<=(n-i)*2;l++)
    cout<<"   ";
    for(int j=1;j<=i;j++){
      cout<<" * ";
    }
    cout<<"\n";
  }
  
  return 0;
}