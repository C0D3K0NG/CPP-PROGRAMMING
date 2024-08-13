#include<iostream>
using namespace std;
class queue {
  int max;
  int rear;
  int arr[];
  public:
  queue(){
  max=5;
  rear=-1;
  arr[max];
  }
  void enqueue(int n){
    if (rear==max-1){
      cout<<"Queue is overloaded"<<endl;
      return;
    }
    arr[++rear]=n;
    cout<<n<<" is pushed in the queue";
  }
  void dequeue(){
    if (rear==-1){
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<arr[0]<<" is popped from the queue"<<endl;
    for(int i=0;i<rear;i++){
      arr[i]=arr[i+1];
    }
    rear--;
  }
  void peek(){
    if (rear==-1){
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<"The top element is "<<arr[0];
  }
};


int main(){
  queue q;
  while(true){
      cout<<"\n\n1.Push a number to the queue\n2.Pop from the queue\n3.Peek the front Number of the queue\n4.Close the program\nChoose what you want to do: ";
      int choice;
      cin>>choice;
      switch(choice){
        case 1:
        int num;
        cout<<"Enter a number to push to the queue: ";
        cin>>num;
        q.enqueue(num);
        break;
        case 2:
        q.dequeue();
        break;
        case 3:
        q.peek();
        break;
        case 4:
        return 0;
        default:
        cout<<"Wrong Input"<<endl;
      }
    }
    return 0;

}
