#include<iostream>
using namespace std;

struct Treenode{
  int val;
  Treenode* left;
  Treenode* right;

};

void postorder(Treenode* root){
  if(root==nullptr){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->val<<" ";
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
  cout<<"The postorder form of this binary tree is: "<<endl;
  cout<<"------------------------------------"<<endl;
  postorder(root);
  cout<<"\n------------------------------------"<<endl;
  return 0;
}