#include<iostream>
using namespace std;
int main(){
	int r,c;
	cout<<"Enter the rows and coloumns of the matrix: ";
	cin>>r>>c;
	int arr[r][c];
	cout<<"Enter the elements of the matrix: "<<endl;

	
	for(int i=0;i<r;i++){
		cout<<"\nRow no."<<i+1<<": ";
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]!=0)
			{
				cout<<"\n|"<<i<<j<<arr[i][j]<<"|";
			}
		}
	}
	return 0;
}