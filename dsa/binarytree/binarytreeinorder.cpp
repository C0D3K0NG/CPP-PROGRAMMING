#include<iostream>
using namespace std;

struct Treenode{
  int val;
  Treenode* left;
  Treenode* right;

};

void inorder(Treenode* root){
  if(root==nullptr){
    return;
  }
  inorder(root->left);
  cout<<root->val<<" ";
  inorder(root->right);
  return;
}

Treenode* buildtree(){
  cout<<"Enter Node value(-1 for null): ";
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
  cout<<"The inorder form of this binary tree is: "<<endl;
  cout<<"------------------------------------"<<endl;
  inorder(root);
  cout<<"\n------------------------------------"<<endl;
  return 0;
}