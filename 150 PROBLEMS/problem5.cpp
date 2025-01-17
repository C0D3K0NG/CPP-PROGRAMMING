/**Generating the Fibonacci Series**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Sequences  
   **Description**: Write a program to generate the Fibonacci series up to a given number.  
   **Example**:  
   Input: `limit = 10`  
   Output: `[0, 1, 1, 2, 3, 5, 8]`  
   Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].  */

#include<iostream>
using namespace std;
int fibocount(int n){
  int p=0,a=1,count=0;
  do{
    count++;
    int temp=a;
    a=p+a;
    p=temp;
  }while(p<n);
  return count;
}
int fibonacci(int n){
  cout<<"[";
  int p=0,a=1;
  int count=fibocount(n);
  for(int i=1;i<=count;i++){
    if(i==count){
      cout<<p;
      break;
    }
    cout<<p<<", ";
    int temp=a;
    a=p+a;
    p=temp;
  }
  cout<<"]";
  return 0;
}
int main(){
  int limit;
  cout<<"Limit of the Fibonacci series: ";
  cin>>limit;
  fibonacci(limit);
  return 0;
}