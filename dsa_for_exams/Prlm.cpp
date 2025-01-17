#include<iostream>
using namespace std;

int main(){
  int arr[]={6,8,1,7,2,3,4,5};

  int d;
  cout<<"Enter the element You want to delete: ";
  cin>>d;

  for(int i=0;i<8;i++){
    if(arr[i]==d){
      for(int j=i;j<8;j++){
        arr[j]=arr[j+1];
      }
      cout<<d<<" is found at pos "<<i+1<<" and successfully deleted"<<endl;
      for(int p=0;p<7;p++){
        cout<<arr[p]<<endl;
      }
      return 0;
    }
    else{
      cout<<"The element is not found in the array"<<endl;
      break;
    }
  }
  return 0;
}