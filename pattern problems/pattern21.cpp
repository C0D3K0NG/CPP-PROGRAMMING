#include<iostream>
using namespace std;

int main(){
  int row;
  cout<<"Enter the row number: ";
  cin>>row;
  for(int i=1;i<=row;i++){
    if(i==1||i==2){
      cout<<"   ";
    }
    int k=i;
    for(int j=i;j<=row;j++){
    cout<<" "<<k<<" ";
    k=k+6;
  }
  cout<<"\n";
  }
return 0;
}