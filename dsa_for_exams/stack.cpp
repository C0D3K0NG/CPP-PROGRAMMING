#include<iostream>
#define MAX 5

using namespace std;

class Stack{
  private:
    int top;
    int arr[MAX];

  public:
    Stack() {
      top=-1;
    }

    bool is_Full() {
      return top==MAX-1;
    }

    bool is_Empty() {
      return top==-1;
    }

    void push(int data){
      if (is_Full()){
        cout<<"Stack overflowed"<<endl;
        return;
      }
      arr[++top]=data;
      cout<<data<<" is pushed onto the stack"<<endl;
    }

    void pop(){
      if(is_Empty()){
        cout<<"Stack is empty"<<endl;
        return;
      }
      cout<<arr[top]<<" is popped from the stack"<<endl;
      top--;
      return;
    }

    void display(){
      if(is_Empty()){
        cout<<"Stack is empty"<<endl;
        return;
      }
      cout<<"Stack elements down the line:"<<endl;
      for(int i=top;i>-1;i--){
        cout<<arr[i]<<endl;
      }
      return;
    }

    void peek(){
      if(is_Empty()){
        cout<<"Stack is empty"<<endl;
        return;
      }
      cout<<"The top element is: "<<arr[top]<<endl;
      return;
    }

};

int main(){
  Stack stack;
  int choice,data;

  while(true){
    cout<<"What operations You want to perform:-"<<endl;
    cout<<"1.Push an element"<<endl;
    cout<<"2.Pop an element"<<endl;
    cout<<"3.Peek the topmost element"<<endl;
    cout<<"4.Display the stack elements"<<endl;
    cout<<"5.Exit"<<endl;

    cin>>choice;
    switch(choice){

      case 1:
      cout<<"Enter the data You want to insert onto the stack"<<endl;
      cin>>data;
      stack.push(data);
      break;
      
      case 2:
      stack.pop();
      break;

      case 3:
      stack.peek();
      break;

      case 4:
      stack.display();
      break;

      case 5:
      cout<<"Exiting program"<<endl;
      return 0;
      break;

      default:
      cout<<"Wrong Option for choice"<<endl;
    }
  cout<<endl;
  }
}