//Check it is a pythagorian triplet or not
#include<iostream>
using namespace std;
int max(int a,int b, int c){
  int max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
  return max;
}
int main(){
 int a,b,c;
 cout<<"Enter three numbers to check they are pythagorian triplet or not: ";
 cin>>a>>b>>c;
 int hypo=max(a,b,c);
 if((2*(hypo*hypo))==(a*a+b*b+c*c))
 cout<<"It is a pythagorian triplet.";
 else
 cout<<"It is not a pythagorian triplet.";
 return 0;
}