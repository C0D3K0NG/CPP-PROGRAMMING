#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};
void insertbegin(Node*& head,int data){
  Node* newNode=new Node();
  newNode->data=data;
  newNode->next=head;
  head=newNode;
  return;
}
// void insertend(Node*& head,int data){
//   Node* newNode=new Node();
//   newNode->data=data;
//   newNode->next=nullptr;
//   Node* temp=head;
//   Node* prev;
//   while(temp!=nullptr){
//     prev=temp;
//     temp=temp->next;
//   }
//   temp=prev;
//   temp->next=newNode;
//   return;
// }
void insertend(Node*& head,int data){
  Node* newNode=new Node();
  newNode->data=data;
  newNode->next=nullptr;
  Node* temp=head;
  if(head==nullptr){
  head=newNode;
  return;
  }
  while(temp->next!=nullptr){ 
    temp=temp->next;
  }
  temp->next=newNode;
  return;
}

void insertkth(Node*& head,int data,int pos){
  Node* newNode=new Node();
  newNode->data=data;
  if(head==nullptr||pos==1){
    newNode->next=head;
    head=newNode;
    return;
  }
  Node* temp=head;
  int count = 1;

  while(temp!=nullptr && count<pos-1){
    count++;
    temp=temp->next;
  }
  if(temp==nullptr){
  cout<<"No such position is formed yet, add more elements or provide appropriate input."<<endl;
  delete newNode;
  return;
  }
  newNode->next=temp->next;
  temp->next=newNode;
  return;
}

void deletebegin(Node*& head){
  if(head==nullptr){
    cout<<"The list is already empty";
    return;
  }
  Node* temp=head;
  head=head->next;
  cout<<temp->data<<" is successfully deleted"<<endl;
  delete temp;
  return;
}

void deleteend(Node*& head){
  if(head==nullptr){
    cout<<"No elements in the list to delete";
    return;
  }
  Node* temp=head;
  if(head->next==nullptr){
    head=nullptr;
    delete temp;
    return;
  }
  while(temp->next->next!=nullptr){
    temp=temp->next;
  }
  cout<<temp->next->data<<" is deleted successfully"<<endl;
  delete temp->next;
  temp->next=nullptr;
  return;
}

void deletekth(Node*& head,int pos){
  Node* temp=head;
  if(pos==1){
    if(head==nullptr){
      cout<<"No elements to delete"<<endl;
      return;
    }
    cout<<temp->data<<" is deleted"<<endl;
    delete temp;
    head=nullptr;
    return;
  }
  int count=1;
  while(temp->next->next!=nullptr||count<pos-1){
    temp=temp->next;
    count++;
  }
  Node* current=temp->next;
  cout<<current->data<<" is deleted"<<endl;
  temp->next=temp->next->next;
  delete current;
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
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"Null"<<endl;
  return;
}


int main(){
  Node* head=nullptr;
  int data;

  while(true){
    int choice;
    cout<<"Select a choice for linked list function:\n0.Exit the program.\n1.Insert an element at the beginning\n2.Insert an element at the end\n3.Insert an element at the kth position\n";
    cout<<"4.Delete at begin\n5.Delete at end\n6.Delete at kth position\n7.Search for an element in the list\n8.Display the linkled list"<<endl;
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