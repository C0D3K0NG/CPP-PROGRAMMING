#include<iostream>
using namespace std;

int main(){
  int n,m;
  cout<<"Enter the rows and columns size of the matrix: "<<endl;
  cout<<"Row Size: ";
  cin>>n;
  cout<<"Column Size: ";
  cin>>m;
  cout<<endl;
  int arr[n][m];
  int total_elements=n*m;

  cout<<"Insert elements for the matrix:-"<<endl;
  for(int i=0;i<n;i++){
    cout<<"Row no."<<i+1<<":-"<<endl;
    for(int j=0;j<m;j++){
      cout<<"Row-"<<i+1<<" | Element-"<<j+1<<": ";
      cin>>arr[i][j];
    }
  }

  int zerosize=0;
  for(int i=0;i<n;i++){
    cout<<"| ";
    for(int j =0;j<m;j++){
      cout<<arr[i][j]<<" ";
      if(arr[i][j]==0){
        zerosize++;
      }
    }
    cout<<"|"<<endl;
  }
  if(zerosize>=((2*total_elements)/3)){
    cout<<"It is a sparse matrix"<<endl;

    cout<<"The three tuple representation is: "<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr[i][j]!=0){
          cout<<"| "<<i<<" "<<j<<" "<<arr[i][j]<<" |"<<endl;
        }
      }
    }
  }
  else{
    cout<<"It is not a sparse matrix"<<endl;
  }
  return 0;
  }