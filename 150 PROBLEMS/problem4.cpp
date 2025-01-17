/**Calculating Armstrong Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Number Theory  
   **Description**: Write a program to check if a number is an Armstrong number.  
   **Example**:  
   Input: `number = 153`  
   Output: `Armstrong Number`  
   Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153. */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number to check it is an armstrong number or not: ";
  cin>>n;
  int temp=n,sum=0;
  while(temp!=0){
    int dig=pow((temp%10),3);
    sum+=dig;
    temp/=10;

  }
  if(sum==n)
  cout<<"The number is an armstrong number";
  else
  cout<<"The number is not an armstrong number";
  return 0;
}