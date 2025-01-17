#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node* prev;
};
void insertbegin(Node*& head,int data){
  Node* newNode = new Node();
  newNode->data=data;
  newNode->next=head;
  newNode->prev=nullptr;

  if(head!=nullptr){
    head->prev=newNode;
  }
  head=newNode;
  return;
}

void insertend(Node*& head,int data){
  Node* newNode=new Node();
  newNode->data=data;
  newNode->next=nullptr;
  if(head==nullptr){
    newNode->prev=nullptr;
    head=newNode;
    return;
  }
  Node* temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  newNode->prev=temp;
  temp->next=newNode;
  return;
}

void insertkth(Node*& head,int data,int pos){
  Node* newNode=new Node();
  newNode->data=data;
  if(pos==1){
    newNode->next=head;
    newNode->prev=nullptr;
    head=newNode;
    return;
  }
  int count=1;
  Node* temp=head;
  while(temp!=nullptr && count<pos-1){
    count++;
    temp=temp->next;
  }
  if(temp==nullptr){
  cout<<"No such position is formed yet, add more elements or provide appropriate input."<<endl;
  delete newNode;
  return;
  }
  newNode->prev=temp;
  newNode->next=temp->next;
  temp->next=newNode;
  return;
}

void deletebegin(Node*& head){
  if(head==nullptr){
    cout<<"List is already empty"<<endl;
    return;
  }
  Node* temp=head;
  temp->next->prev=nullptr;
  head=temp->next;
  cout<<temp->data<<" is successfully deleted"<<endl;
  delete temp;
  return;
}

void deleteend(Node*& head){
  if(head==nullptr){
    cout<<"List is already empty"<<endl;
    return;
  }
  Node* temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  temp->prev->next=nullptr;
  cout<<temp->data<<" is deleted successfully"<<endl;
  delete temp;
  return;
}

void deletekth(Node*& head,int pos){
  if(head==nullptr){
    cout<<"No element in the list"<<endl;
    return;
  }
  Node* temp=head;
  int count=1;
  while(temp!=nullptr && count<pos){
    temp=temp->next;
    count++;
  }
  if(temp==nullptr){
    cout<<"Position out of bounds"<<endl;
    return;
  }
  temp->prev->next=temp->next;
  temp->next->prev=temp->prev;
  cout<<temp->data<<" is deleted successfully"<<endl;
  delete temp;
  return;
}

void search(Node*& head,int data){
  if(head==nullptr){
    cout<<"There are no items in the list"<<endl;
    return;
  }
  Node* temp=head;
  while(temp!=nullptr){
    if(temp->data==data){
      cout<<data<<" is found in the list"<<endl;
      return;
    }
    temp=temp->next;
  }
  cout<<data<<" is not found in the list"<<endl;
  return;
}
void display(Node* head){
  Node* temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<"<->";
    temp=temp->next;
  }
  cout<<"Null"<<endl;
  return;
}

int main(){
  Node* head=nullptr;
  while(true){
    int choice,data;

    cout<<"Select a choice for linked list function:\n";
    cout<<"0.Exit the program.\n";
    cout<<"1.Insert an element at the beginning\n";
    cout<<"2.Insert an element at the end\n";
    cout<<"3.Insert an element at the kth position\n";
    cout<<"4.Delete at begin\n";
    cout<<"5.Delete at end\n";
    cout<<"6.Delete at kth position\n";
    cout<<"7.Search for an element in the list\n";
    cout<<"8.Display the linkled list"<<endl;
    
    cin>>choice;
    switch(choice){

      case 0:
      exit(0);

      case 1:
      cout<<"Enter the data to insert at the beginning in the linked list: ";
      cin>>data;
      insertbegin(head,data);
      break;

      case 2:
      cout<<"Enter the data to insert at the ending in the linked list: ";
      cin>>data;
      insertend(head,data);
      break;

      case 3:
      int position;
      cout<<"Enter the position you want to insert the element: ";
      cin>>position;
      cout<<"Enter the data to insert at position "<<position<<" in the linked list: ";
      cin>>data;
      insertkth(head,data,position);
      break;

      case 4:
      deletebegin(head);
      break;

      case 5:
      deleteend(head);
      break;

      case 6:
      int pos;
      cout<<"Enter the position you want to delete the element: ";
      cin>>pos;
      deletekth(head,pos);
      break;

      case 7:
      int searchdata;
      cout<<"Enter the element for the search: "<<endl;
      cin>>searchdata;
      search(head,searchdata);
      break;

      case 8:
      display(head);
      break;

      default:
      cout<<"Wrong choice,try again"<<endl;
    }
  }
  return 0;
}
  


