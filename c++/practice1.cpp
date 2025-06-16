//Addition
#include<iostream>
using namespace std;
int add(){
  int sum {4+5};
  return sum;
}
int subtract(){
  int sub {5-4};
  return sub;
}
int multiply(int a , int b){
  int mul {a*b};
  return mul;
}
//Here we can do basic operations like this with curly braces
int main(){
  cout<<add()<<endl;
  cout<<subtract()<<endl;
  //lets try with variables 
  int a=5,b=6;
  cout<<multiply(a,b);
  return 0;
}


