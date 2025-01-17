/**Summing Digits of a Number**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Mathematical Computations  
   **Description**: Write a program to calculate the sum of digits of a number.  
   **Example**:  
   Input: `number = 1234`  
   Output: `10`  
   Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10.  */

#include<iostream>
using namespace std;

int sum(int n){
  if(n==0)
  return 0;
  return (n%10) + sum(n/10);
}
int main(){
  int num;
  cout<<"Enter a number to find the sum of its digits: ";
  cin>>num;
  cout<<"The sum of digits of number "<<num<<" is "<<sum(num);
  return 0;
}