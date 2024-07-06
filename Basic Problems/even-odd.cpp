//This is a program to find even or odd of a number
#include<iostream>
using namespace std;
int main(){
  int c;
  cout<<"Enter a number: ";
  cin>>c;
  if(c%2==0)
  cout<<"The number "<<c<<" is even";
  else
  cout<<"The number "<<c<<" is odd";
  return 0;
}