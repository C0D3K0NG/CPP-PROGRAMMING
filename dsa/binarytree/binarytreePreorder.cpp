#include<iostream>
using namespace std;

struct Treenode{
  int val;
  Treenode* left;
  Treenode* right;

};

void preorder(Treenode* root){
  if(root==nullptr){
    return;
  }

  cout<<root->val<<" ";
  preorder(root->left);
  preorder(root->right);
  return;
}

Treenode* buildtree(){
  cout<<"Enter Node value: ";
  int value;
  cin>>value;

  if (value==-1){
    return nullptr;
  }

  Treenode* newNode=new Treenode();
  newNode->val=value;
  cout<<"\nEnter left value of "<<value<<":\n";
  newNode->left=buildtree();
  cout<<"\nEnter right value of "<<value<<":\n";
  newNode->right=buildtree();
  return newNode;
}

int main(){
  cout<<"Build the binary tree:-"<<endl;
  cout<<"------------------------------------"<<endl;
  Treenode* root=new Treenode();
  root = buildtree();
  cout<<"------------------------------------"<<endl;
  cout<<"The preorder form of this binary tree is: "<<endl;
  cout<<"------------------------------------"<<endl;
  preorder(root);
  cout<<"\n------------------------------------"<<endl;
  return 0;
}