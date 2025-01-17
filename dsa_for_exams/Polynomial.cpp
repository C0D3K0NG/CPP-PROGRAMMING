#include<iostream>
using namespace std;

struct Node{
  int coefficient;
  int exponent;
  Node* next;

  Node(int coef,int exp):coefficient(coef),exponent(exp),next(nullptr){}
};

Node* createTerm(int coefficient,int exponent){
  return new Node(coefficient,exponent);
}

void insertTerm(Node*& head,int coefficient,int exponent){
  if (coefficient==0) return;
  Node* newNode=createTerm(coefficient,exponent);
  if(!head || head->exponent<exponent){
    newNode->next=head;
    head=newNode;
  }
  else{
    Node* current=head;
    Node* prev=nullptr;

    while(current && current->exponent>=exponent){
      if(exponent==current->exponent){
        current->coefficient+=coefficient;
        delete newNode;
        return;
      }
      prev=current;
      current=current->next;
    }
    prev->next=newNode;
    newNode->next=current;
  }
}

void display(Node* head){
  if(!head){
    cout<<"0"<<endl;
    return;
  }
  while(head){
    cout<<head->coefficient<<"x^"<<head->exponent;
    head=head->next;
    if(head){
      cout<<" + ";
    }
  }
  cout<<endl;
}

Node* addpoly(Node* poly1,Node* poly2){
  Node* result=nullptr;
  while(poly1&&poly2){
    if(poly1->exponent>poly2->exponent){
      insertTerm(result,poly1->coefficient,poly1->exponent);
      poly1=poly1->next;
    }
    else if(poly2->exponent>poly1->exponent){
      insertTerm(result,poly2->coefficient,poly2->exponent);
      poly2=poly2->next;
    }
    else{
      insertTerm(result,poly1->coefficient+poly2->coefficient,poly1->exponent);
      poly1=poly1->next;
      poly2=poly2->next;
    }
  }
  while(poly1){
    insertTerm(result,poly1->coefficient,poly1->exponent);
    poly1=poly1->next;
  }
  while(poly2){
    insertTerm(result,poly2->coefficient,poly2->exponent);
    poly2=poly2->next;
  }
  return result;
}

int main(){
  Node* poly1=nullptr;
  Node* poly2=nullptr;

  int terms1,terms2;

  cout<<"Enter the number of terms for polynomial 1:";
  cin>>terms1;
  cout<<"Enter the coefficient and exponents of the terms:-"<<endl;
  for(int i=1;i<=terms1;i++){
    int coefficient,exponent;
    cout<<"Coefficient for term"<<i<<": ";
    cin>>coefficient;
    cout<<"Exponent for term"<<i<<": ";
    cin>>exponent;
    insertTerm(poly1,coefficient,exponent);
  }

  cout<<"Enter the number of terms for polynomial 2:";
  cin>>terms2;
  cout<<"Enter the coefficient and exponents of the terms:-"<<endl;
  for(int i=1;i<=terms2;i++){
    int coefficient,exponent;
    cout<<"Coefficient for term"<<i<<": ";
    cin>>coefficient;
    cout<<"Exponent for term"<<i<<": ";
    cin>>exponent;
    insertTerm(poly2,coefficient,exponent);
  }

  cout<<"The first polynomial is: ";
  display(poly1);
  cout<<"The second polynomial is: ";
  display(poly2);

  Node* result=addpoly(poly1,poly2);
  cout<<"The addition of two polynomial is: ";
  display(result);
  return 0;
}