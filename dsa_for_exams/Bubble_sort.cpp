#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  return;
}

void insertionsort(int arr[],int n){
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;

    while(j>=0&&arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

void selectionsort(int arr[],int n){
  for(int i = 0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
      if(arr[min]>arr[j])
      min=j;
    }
    if(min!=i){
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }
  return;
}

int main(){
  int arr[5]={2,6,7,5,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  selectionsort(arr,n);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}