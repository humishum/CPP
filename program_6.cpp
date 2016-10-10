// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_6
#include<iostream>
#include<cmath>
#include<iomanip>

int main(){
  using namespace std;
//declare variables take input
  int a,b,c;
  cout<<"Please enter the coefficient of x squared: "<<endl;
  cin>>a;
  cout<<"Please enter the coefficient of x: "<<endl;
  cin>>b;
  cout<<"Please enter the constant term: "<<endl;
  cin>>c;
//solve for discriminant
double discriminant=(b*b)-4*a*c;
double x1,x2;
if(a==0){
  cout<<"The coefficient of x squared must be nonzero."<<endl;
}
//real roots
else if(discriminant>0){
  cout<<"The equation has distinct real roots."<<endl;
  x1= (-b+sqrt((b*b)-4*a*c))/(2*a);
  x2= (-b-sqrt((b*b)-4*a*c))/(2*a);
  cout<<"The roots are: "<<fixed<<setprecision(3)<<x1<<", "<<x2<<endl;

}// repeated roots
else if(discriminant==0){
  cout<<"The equation has repeated roots."<<endl;
  x1= (-b+sqrt((b*b)-4*a*c))/(2*a);
  cout<<"Each root is equal to: "<<fixed<<setprecision(3)<<x1<<endl;
}// no real roots
else if(discriminant<0){
  cout<<"The equation does not have real roots."<<endl;
}

}
