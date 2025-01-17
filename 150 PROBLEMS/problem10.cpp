/**Finding the Greatest Common Divisor (GCD)**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to find the GCD of two numbers.  
    **Example**:  
    Input: `a = 48, b = 18`  
    Output: `6`  
    Explanation: The GCD of 48 and 18 is 6.*/

#include<iostream>
using namespace std;


int gcd(int a,int b){
  int gcd_number;
  for(int j=1;j<=b;j++){
    if( a%j==0 && b%j==0 )
      gcd_number=j;
  }
  return gcd_number;
}
int main(){
  int a,b;
  cout<<"Enter two numbers to find out the gcd of the number.";
  cout<<"\nNumber 1: ";
  cin>>a;
  cout<<"Number 2: ";
  cin>>b;
  cout<<"The gcd for the numbers is: "<<gcd(a,b);
  return 0;
}