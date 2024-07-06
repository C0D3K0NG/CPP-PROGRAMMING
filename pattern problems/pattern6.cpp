/*
Enter the number of rows: 5
Enter the number of coloumns: 6
 U_U  U_U  U_U  U_U  U_U  U_U

 U_U                      U_U

 U_U                      U_U

 U_U                      U_U

 U_U  U_U  U_U  U_U  U_U  U_U
*/
#include<iostream>
using namespace std;
int main(){
  int r,c;
  cout<<"Enter the number of rows: ";
  cin>>r;
  cout<<"Enter the number of coloumns: ";
  cin>>c;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      if(i==1||i==r||j==1||j==c)
      cout<<" U_U ";
      else
      cout<<"     ";
    }
    cout<<"\n\n";
  }
  return 0;
}