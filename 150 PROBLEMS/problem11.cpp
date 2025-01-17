/**Finding the Least Common Multiple (LCM)**  
    **Difficulty**: Easy  
    **Topics**: Basic Programming, Number Theory  
    **Description**: Write a program to find the LCM of two numbers.  
    **Example**:  
    Input: `a = 12, b = 15`  
    Output: `60`  
    Explanation: The LCM of 12 and 15 is 60.  */

#include<iostream>
using namespace std;


int lcm(int a,int b){
  int mul=a*b;
  for(int j=1;j<=mul;j++){
    if( j%a==0 && j%b==0 )
      return j;
  }
}
int main(){
  int a,b;
  cout<<"Enter two numbers to find out the lcm of the number.";
  cout<<"\nNumber 1: ";
  cin>>a;
  cout<<"Number 2: ";
  cin>>b;
  cout<<"The lcm for the numbers is: "<<lcm(a,b);
  return 0;
}