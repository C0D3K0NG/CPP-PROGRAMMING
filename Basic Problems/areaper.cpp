#include<iostream>
#include<math.h>
using namespace std;
int main(){
  cout<<"This is a function to find out the perimeter and area of square, rectangle and circle\n";
  int a,b,choice;

  cout<<"For finding of square choose 1, for rectangle choose 2,  for circle choose 3:  ";
  cin>>choice;
  switch(choice){
    case 1:
    {
      cout<<"Enter side of the square: ";
      cin>>a;
      cout<<"Area is: "<<a*a;
      cout<<"\nPerimeter is: "<<4*a;
      break;
    }
    case 2:
    {
      cout<<"Enter length and breadth of the rectangle: ";
      cin>>a>>b;
      cout<<"Area is: "<<a*b;
      cout<<"\nPerimeter is: "<<(2*(a+b));
      break;
    }
    case 3:
    {
      cout<<"Enter radius of the circle: ";
      cin>>a;
      cout<<"Area is: "<<(3.14*a*a);
      cout<<"\nPerimeter is: "<<(2*3.14*a);
      break;
    }
    default:
    cout<<"Wrong Input";

  }
  
  
  return 0;

}