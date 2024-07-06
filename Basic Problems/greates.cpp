//This is a program to find the greatest among the three numbers
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"\nEnter three numbers to find the largest among the three: ";
  cin>>a>>b>>c;
  int max=(a>b&&a>c)?a:(b>c&&b>a)?b:c;
  cout<<"\nThe largest is: "<<max;
  return 0;
   }  
