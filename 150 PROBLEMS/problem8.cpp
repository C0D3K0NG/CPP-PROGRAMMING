/**Finding the Factorial of a Number**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Mathematical Computations  
   **Description**: Write a program to compute the factorial of a given number.  
   **Example**:  
   Input: `number = 5`  
   Output: `120`  
   Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120.*/

#include<iostream>
using namespace std;

factorial(int n){
  if (n==0|| n==1)
    return 1;
  return n* factorial(n-1);
}
int main(){
  int num;
  cout<<"Enter  number to find the factorial: ";
  cin>>num;
  if(num>=0&&num<=1000)
  cout<<"The factorial of "<<num<<" is: "<<factorial(num)<<endl;
  else
  cout<<"Enter a number between 0 and 1000";
  return 0;
}