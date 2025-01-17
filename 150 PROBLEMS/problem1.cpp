/**Determining Even/Odd Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming  
   **Description**: Write a program to check whether a number is even or odd.  
   **Example**:  
   Input: `number = 4`  
   Output: `Even`  
   Explanation: Since 4 is divisible by 2, it is an even number. */

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number to check it is an even number or not: ";
  cin>>n;
  cout<<endl;
  if(n%2==0){
    cout<<"It is an even number"<<endl;
  }
  else{
    cout<<"It is an odd number"<<endl;
  }
  return 0;
}