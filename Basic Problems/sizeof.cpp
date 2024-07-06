#include<iostream>
using namespace std;
int main(){
  short a;
  int b;
  long c;
  long long d;
  float e;
  double f;
  long double g;
  char h;
  
  cout<<"\nSize of short int: "<< sizeof(a);
  cout<<"\nSize of int: "<< sizeof(b);
  cout<<"\nSize of long int: "<< sizeof(c);
  cout<<"\nSize of long long int: "<< sizeof(d);
  cout<<"\nSize of float: "<< sizeof(e);
  cout<<"\nSize of double: "<< sizeof(f);
  cout<<"\nSize of long double: "<< sizeof(g);
  cout<<"\nSize of char: "<< sizeof(h);
  return 0;

}