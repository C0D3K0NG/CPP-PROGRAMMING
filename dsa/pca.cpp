#include<iostream>
#include<cmath>
using namespace std;
void arrayprint(float ar[],int n){
    cout<<"|";
  for(int i=0;i<n;i++){
    cout<<ar[i];
    if(i!=n-1)
    cout<<"\t";
  }
  cout<<"|";
}
int main(){
  //Place The sampleno. and datas of x and y here:   
  int sam=10;        //sample no.
  float x[sam]={2.5,0.5,2.2,1.9,3.1,2.3,2.0,1.0,1.5,1.1};
  float y[sam]={2.4,0.7,2.9,2.2,3.0,2.7,1.6,1.1,1.6,0.9};
  //--------------------------------------------------------------------------
  
  float sumx=0.0,sumy=0.0;
  for(int i=0;i<sam;i++){
    sumx+=x[i];
    sumy+=y[i];
  }
  sumx/=sam;
  sumy/=sam; 
  cout<<"Mean of x is: "<<sumx<<endl<<"Mean of y is: "<<sumy<<endl;
  float covxx=0.0,covxy=0.0,covyy=0.0;
  for(int i=0;i<sam;i++){
      covxx+=((x[i]-sumx)*(x[i]-sumx));
      covxy+=(-sumy+y[i])*(-sumx+x[i]);
      covyy+=(-sumy+y[i])*(-sumy+y[i]);
  }
  covxx/=(sam-1);
  covxy/=(sam-1);
  covyy/=(sam-1);
  cout<<"Cov of x,y is: \n|"<<covxx<<"\t"<<covxy<<"|\n|"<<covxy<<"\t"<<covyy<<"|"<<endl;
  float al=((covxx+covyy)+sqrt(((covxx+covyy)*(covxx+covyy))-(4*((covxx*covyy)-(covxy*covxy)))))/2;
  cout<<"In Char Equation we got λ: "<<al; 
  float ex1=(-covxy)/sqrt((covxy*covxy)+((covxx-al)*(covxx-al)));
  float ex2=(covxx-al)/sqrt((covxy*covxy)+((covxx-al)*(covxx-al)));
  cout<<"\nThe value of e1 is: \n|"<<ex1<<"|\n|"<<ex2<<"|\n";
  float p[sam];
  for(int i=0;i<sam;i++){
      p[i]=((ex1*(x[i]-sumx))+(ex2*(y[i]-sumy)));
  }
  cout<<"The first pc1 is : "<<endl;
  arrayprint(p,sam);
  return 0;
}