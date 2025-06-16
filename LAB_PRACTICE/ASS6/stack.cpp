#include<iostream>
using namespace std;

const int size=100;

template<class T>

class stack{
  T stackarr[size];
  int top;

  public:
    stack(){
      top=-1;
    }
    void pop(){
      if(top<0){
        cout<<"Stack is empty"<<endl;
        return;
      }
      cout<<stackarr[top]<<" is popped from the stack"<<endl;
      top--;
      return;
    }

    void push(T a){
      if(top>=size-1){
        cout<<"Stack is full"<<endl;
        return;
      }
      stackarr[++top]=a;
      cout<<a<<" is pushed into the stack"<<endl;
      return;
    }
    void display(){
      if(top<0){
        cout<<"Stack is empty"<<endl;
        return;
      }
      for(int i=0;i<=top;i++){
        cout<<stackarr[i]<<" ";
      }
      return;
    }
};
int main(){
  stack<int> st;
  st.push(9);
  st.push(3);
  st.display();
  return 0;
}