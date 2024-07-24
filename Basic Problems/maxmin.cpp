#include<iostream>
using namespace std;
void maxmin(int n,int ar[],int r[2]){
  r[0]=ar[0];
  r[1]=ar[0];
  for(int i=0;i<n;i++){
    if(r[0]>ar[i])
      r[0]=ar[i];
    if(r[1]<ar[i])
      r[1]=ar[i];
  }
}
int main()
{
  int size;
  cout<<"Enter the size of the array: "; //  printing for inputing the size of the array
  cin>>size;
  int arr[size],result[2];
  cout<<"Enter the elements of the array: ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  maxmin(size,arr,result);
  cout<<"The maximum of the elements is: "<<result[0]<<endl;
  cout<<"The minimum of the elements is: "<<result[1]<<endl;
  return 0;
}