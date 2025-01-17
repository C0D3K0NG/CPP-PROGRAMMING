/**Crafting Star Patterns**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Patterns  
   **Description**: Write a program to create different star patterns (e.g., pyramid, diamond).  
   **Example**:  
   Input: `patternType = "pyramid", height = 5`  
   Output:  
   ```
       *
      ***
     *****
    *******
   *********
   ```  
   Explanation: A pyramid pattern with a height of 5 is generated.*/

#include<iostream>
using namespace std;

int main(){
  int ht;
  cout<<"Printing pattern type for pyramid.\nMention the height:";
  cin>>ht;
  for(int i=1;i<=ht;i++){
    for(int j=ht-i;j>=1;j--){
      cout<<" ";
    }
    for(int k=1;k<=(2*i-1);k++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}