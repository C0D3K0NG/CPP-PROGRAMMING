#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  cout<<"\nEnter the elements of the array: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int search;
  cout<<"\nEnter the element you want to search: ";
  cin>>search;
   for(int i=0;i<n;i++){
    if (search == arr[i]){
      cout<<"Element "<<search<<" found at "<<(i+1)<<" index"<<endl;
      return 0;
    }
  }
  cout<<"Element not found. ";
  return 0;
}