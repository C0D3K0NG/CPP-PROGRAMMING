#include<iostream>
using namespace std;

void towerofhanoi(int n,char source,char target,char auxillary){
  if(n==1){
    cout<<"Move disk 1 from "<<source<<" to "<<target<<endl;
    return;
  }
  towerofhanoi(n-1,source,auxillary,target);

  cout<<"Move disk "<<n<<" from "<<source<<" to "<<target<<endl;

  towerofhanoi(n-1,auxillary,target,source);
}

int main(){
  int n;
  cout<<"Enter the number of disks: ";
  cin>>n;

  cout<<"The steps to solve this tower of hanoi is: "<<endl;
  towerofhanoi(n,'A','C','B');
  return 0;
}