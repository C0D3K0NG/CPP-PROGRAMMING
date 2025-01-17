#include<iostream>
using namespace std;

struct Treenode{

  int val;
  Treenode* left;
  Treenode* right;

};
Treenode* buildtree(int arr[],int& index,int length){
  if(index>=length || arr[index]==-1){
    index++;
    return nullptr;
  }

  Treenode* newNode=new Treenode;
  newNode->val=arr[index++];
  newNode->left=buildtree(arr,index,length);
  newNode->right=buildtree(arr,index,length);
  return newNode;
}

int height(Treenode* root){
  if (root==nullptr){
    return 0;
  }
  int leftheight=height(root->left);
  int rightheight=height(root->right);
  return max(leftheight,rightheight)+1;
}

int sumlevel(Treenode* root,int level){
  if (root==nullptr){
    return 0;
  }
  if(level==1){
    return root->val;
  }
    int leftsum=sumlevel(root->left,level-1);
    int rightsum=sumlevel(root->right,level-1);
  return leftsum+rightsum;
}
void printlevel(Treenode* root,int level){
  if ( root==nullptr)
    return;
  if(level==1){
    cout<<root->val<<" ";
  }
  else if(level>1){
    printlevel(root->left,level-1);
    printlevel(root->right,level-1);
  }
  return;
}

void levelorder(Treenode* root){
  if(root==nullptr)
    return;
  
  int ht=height(root);
  for(int i=1;i<=ht;i++){
    cout<<"\nlevel "<<i<<"->     ";
    printlevel(root,i);
  }
  return;
}
int main(){
  Treenode* root=new Treenode;
  int arr[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
  int length=sizeof(arr)/sizeof(arr[0]);
  int index=0;
  root=buildtree(arr,index,length);
  cout<<"The levels of the tree are: "<<endl;
  cout<<"-----------------------------------";
  levelorder(root);
  cout<<"\n-----------------------------------";
  cout<<"\nEnter which level You want to find the sum of: ";
  int level,sum,ht;
  ht=height(root);
  cin>>level;
  if(level>ht){
    cout<<"Level given is higher than the height of the tree"<<endl;
    cout<<"\n-----------------------------------"<<endl;
    main();
    return 0;
  }
  
  sum=sumlevel(root,level);
  cout<<"The sum of level "<<level<<" is : "<<sum;
  cout<<"\n-----------------------------------";
  return 0;
}