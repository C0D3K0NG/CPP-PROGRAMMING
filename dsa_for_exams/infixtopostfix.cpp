#include<iostream>
#define MAX 100
using namespace std;
char arr[MAX];
int top=-1;

void push(char c){
  if(top==MAX-1){
    cout<<"Stack overflowed"<<endl;
    return;
  }
  arr[++top]=c;
}

void pop(){
  if(top==-1){
    cout<<"Stack underflowed"<<endl;
    return;
  }
  top--;
}

bool charchk(char c){
  return (c=='+'||c=='-'||c=='/'||c=='*'||c=='^');
}

int precedence(char c){

}

