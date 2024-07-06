#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter two Numbers to swap: ";
  cin>>a;
  cin>>b;
  cout<<"The numbers before swapping: "<<a<<" and "<<b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"\nThe numbers after swapping: "<<a<<" and "<<b;
  return 0;
}