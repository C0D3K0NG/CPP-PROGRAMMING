#include<iostream>
using namespace std;
int main(){
  int a=1;
  int c= ++a + a++ + a++;
  cout<<c;
  return 0;
}