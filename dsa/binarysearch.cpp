#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n],l=0,r=n-1,mid,flag=0;
  cout<<"\nEnter the elements of the array in sorted order: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }


  int search;
  cout<<"\nEnter the element you want to search: ";
  cin>>search;

  while(l<r){
    mid=(l+r)/2;
    if(arr[mid]==search){
      cout<<"Element "<<search<<" found at "<<(mid)<<" index"<<endl;
      flag=1;
      break;
    }
    else if(arr[mid]<search){
      l=mid+1;
    }
    else
      r=mid-1;
  }
  if(flag==0){
    cout<<"Element not found";
  }
}