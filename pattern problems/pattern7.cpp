/*
Enter a number: 4
 ****
  ***
   **
    *
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int k=1;k<=i;k++){
      cout<<" ";
    }
    for(int j=i;j<=n;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}