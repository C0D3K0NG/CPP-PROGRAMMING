#include<iostream>
#define MAX 5
using namespace std;

class Queue{
  private:
    int rear;
    int front;
    int arr[MAX];
  
  public:
    Queue(){
      rear=-1;
      front=-1;
    }

    bool is_Full(){
      return rear==MAX-1;
    }

    bool is_Empty(){
      return front==rear;
    }

    void enqueue(int data){
      if(is_Full()){
        cout<<"Queue overflowed"<<endl;
        return;
      }
      if(front==-1){
        front++;
      }
      arr[++rear]=data;
      cout<<data<<" is enqueued onto the queue"<<endl;
      return;
    }

    void dequeue(){
      if(is_Empty()){
        cout<<"Queue underflowed"<<endl;
        return;
      }
      cout<<arr[front]<<" is dequeued from the queue"<<endl;
      front++;
      return;
    }

    void peek(){
      if(is_Empty()){
        cout<<"Queue underflowed"<<endl;
        return;
      }
      cout<<"The rear element is: "<<arr[rear];
      return;
    }
    void display(){
      if(is_Empty()){
        cout<<"Queue underflowed"<<endl;
        return;
      }
      for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      return;
    }
};

int main(){
  Queue queue;
  int choice,data;

  while(true){
   cout<<"Select one operation from the options below:-"<<endl;
   cout<<"1.Enqueue an element"<<endl;
   cout<<"2.Dequeue an element"<<endl;
   cout<<"3.Peek the rear element"<<endl;
   cout<<"4.Display the queue"<<endl;
   cout<<"5.Exit"<<endl;
   cin>>choice;
   switch(choice){

    case 1:
    cout<<"Enter an element to enqueue onto the queue"<<endl;
    cin>>data;
    queue.enqueue(data);
    break;

    case 2:
    queue.dequeue();
    break;

    case 3:
    queue.peek();
    break;

    case 4:
    queue.display();
    break;

    case 5:
    return 0;
    break;

    default:
    cout<<"Wrong Choice"<<endl;
   }
  cout<<endl;
  }
  return 0;
}