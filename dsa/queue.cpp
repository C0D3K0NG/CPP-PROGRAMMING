#include<iostream>
using namespace std;
#define n 20

class queue{
  int *arr;
  int front,back;
  public:
  queue(){
    arr=new int[n];
    front=-1;
    back=-1;
  }
  bool empty(){
    return(back==-1||front>back);
  }
  
  void push(int m){
    if (back==(n-1)){
      cout<<"Queue overflowed"<<endl;
      return;
    }
    arr[++back]=m;
    if(front==-1)
    front++;
    cout<<m<<" is pushed into the queue"<<endl;
  }
  void pop(){
    if (empty()){
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<arr[front]<<" is popped from the queue"<<endl;
    front++;
  }
  void peek(){
    if (empty()){
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<arr[front];
  }
};
int main(){
  queue q;
    while(true){
      cout<<"\n\n1.Push a number to the queue\n2.Pop from the queue\n3.Check whether the queue is empty\n4.Peek the front Number of the queue\n5.Close the program\nChoose what you want to do: ";
      int choice;
      cin>>choice;
      switch(choice){
        case 1:
        int num;
        cout<<"Enter a number to push to the queue: ";
        cin>>num;
        q.push(num);
        break;
        case 2:
        q.pop();
        break;
        case 3:
        if(q.empty())
          cout<<"Queue is empty"<<endl;
        else
          cout<<"Queue is not empty"<<endl;
        break;
        case 4:
        q.peek();
        break;
        case 5:
        return 0;
        default:
        cout<<"Wrong Input"<<endl;
      }
    }
    return 0;
}
    