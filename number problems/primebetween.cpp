//print all prime numbers between two given numbers
#include<iostream>
using namespace std;
int prime(int num){
  for(int i=2;i<num;i++){
    if(num%i==0){
      return 0;
    }
  }
  cout<<num<<" ";
}
int main(){
  int c,d;
  cout<<"Enter two numbers to get the prime numbers in between: ";
  cin>>c>>d;
  for(int i=c;i<=d;i++){
    prime(i);
  }
  return 0;
}