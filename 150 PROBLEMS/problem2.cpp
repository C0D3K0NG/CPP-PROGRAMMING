/**Checking for Prime Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Number Theory  
   **Description**: Write a program to determine if a number is prime.  
   **Example**:  
   Input: `number = 7`  
   Output: `Prime`  
   Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.*/

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number to check it is prime or not: ";
  cin>>n;
  cout<<endl;
  int count=0;
  for (int i=2;i<n;i++){
    if(n%i==0)
      count++;
  }
  if(count==0)
  cout<<"The number is a prime number"<<endl;
  else
  cout<<"The number is not a prime number"<<endl;
  return 0;
}