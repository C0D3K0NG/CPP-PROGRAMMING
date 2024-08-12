/*
Here's a more concise version of the algorithm:

### Algorithm

1. **Initialize**:
   - Set `top = -1` (empty stack).
   - Define array `arr[max]`.

2. **Operations**:
   - **Check Empty**: Return `true` if `top == -1`.
   - **Check Full**: Return `true` if `top == max - 1`.
   - **Push**: If not full, increment `top` and insert the element at `arr[top]`.
   - **Pop**: If not empty, print and remove the element at `arr[top]`, then decrement `top`.
   - **Peek**: If not empty, print the element at `arr[top]`.
   - **Display**: If not empty, print elements from `arr[0]` to `arr[top]`.

3. **Main Loop**:
   - Continuously show menu options.
   - Based on user input, perform the corresponding operation (Push, Pop, etc.).
   - Exit when the user selects the exit option.

### Flow:
1. Start.
2. Perform operations based on user input.
3. Repeat until the user chooses to exit.
4. End.
*/

#include<iostream>
using namespace std;
#define max 100
int top=-1;
int arr[max];

bool empty(){
  return top==-1;
}
bool full(){
  return top==max-1;
}
void push(int n){
  if(top == max - 1){
    cout << "stack overloaded" << endl;
    return;
  }
  
  cout << n << " is pushed into the stack" << endl;
  arr[++top] = n;
}
void pop(){
  if(top==-1){
    cout<<"Stck is empty"<<endl;
  }
  else{
    cout<<arr[top] <<" is popped from the stack"<<endl;
    top--;
  }
}

void peek(){
  if(top==-1){
    cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"The top vriable of the stack is "<<arr[top];
  }
}

void display(){
  if(top==-1){
    cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"The variables in the stack are: "<<endl;
    for(int i=0;i<top;i++){
      cout<<arr[i]<<endl;
    }
  }
}
int main(){
  while(true){
    cout<<"\n\n1.Push a number to the stack\n2.Pop from the stack\n3.Check whether the stack is empty\n4.Check whether the stack is full\n5.Peek the top Number of the stack\n6.Display the stack\n7.Close the program\nChoose what you want to do: ";
    int choice;
    cin>>choice;
    switch(choice){
      case 1:
      int num;
      cout<<"Enter a number to push to the stack: ";
      cin>>num;
      push(num);
      break;
      case 2:
      pop();
      break;
      case 3:
      if(empty())
        cout<<"Stack is empty"<<endl;
      else
        cout<<"Stack is not empty"<<endl;
      break;
      case 4:
      if(full())
        cout<<"Stack is full"<<endl;
      else
        cout<<"Stack is not full"<<endl;
      break;
      case 5:
      peek();
       break;
      case 6:
       display();
       break;
      case 7:
      return 0;
      default:
      cout<<"Wrong Input"<<endl;
    }
  }
  return 0;
}
       
           

  