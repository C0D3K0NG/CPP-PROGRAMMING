#include<iostream>
using namespace std;

struct Treenode{
  int val;
  Treenode* left;
  Treenode* right;

};

int height(Treenode* root){
  if(root==nullptr){
    return 0;
  }
  int leftheight= height(root->left);
  int rightheight= height(root->right);
  return max(leftheight,rightheight)+1;
}

void printlevel(Treenode* root,int level){
  if(root==nullptr){
    return;
  }
  if (level==1){
    cout<<root->val<<" ";
  }
  else if(level>1){
    printlevel(root->left,level-1);
    printlevel(root->right,level-1);
    return;
  }
}

void levelorder(Treenode* root){
  if(root==nullptr){
    return;
  }
  int ht=height(root);
  for(int i=1;i<=ht;i++){
  printlevel(root,i);
  cout<<"\n";
  }
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
  cout<<"The levelorder form of this binary tree is: "<<endl;
  cout<<"------------------------------------"<<endl;
  levelorder(root);
  cout<<"------------------------------------"<<endl;
  return 0;
}