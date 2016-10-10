// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_10
#include <iostream>

int main(){
  using namespace std;
  int a,b,q,x,lastx,y,lasty,temp,temp1,temp2,temp3;
  //take input of numbers
  cout<<"Enter two positive integers, a and b,"<<endl<<"that are both less than 2.147 billion: "<<endl;
  cin>>a;
  cin>>b;

  int aa=a;
  int bb=b;
  //Calculate GCF
  int d=a;
  while(a %d !=0 || b %d !=0 ) {
    d--;
  }
  if (a %d==0 && b %d==0) {
    cout<<endl;
    cout<<"The gcd of "<<a<<" and "<<b<<" is "<<d<<"."<<endl;
    cout<<endl;
  }
  //proof
  cout<<"proof:"<<endl;
  cout<<endl;
  cout<<a<<" mod "<<d<<" is "<<a%d<<"."<<endl;
  cout<<b<<" mod "<<d<<" is "<<b%d<<"."<<endl;

//equation portion
  if (b>a) {
         temp=a;
         a=b;
         b=temp;
  }
  else{
    temp=b;
    b=a;
    a=temp;
  }

     x=0;
     y=1;
     lastx=1;
     lasty=0;
     while (b!=0) {
         q= a/b;
         temp1= a%b;
         a=b;
         b=temp1;

         temp2 = x;
         x=lastx-q*x;
         lastx = temp2;

         temp3 = y;
         y = lasty-q*y;
         lasty=temp3;
     }

  cout<<d<<" = ("<<lasty<<"*"<<aa<<")+("<<lastx<<"*"<<bb<<")."<<endl;
  cout << "Therefore, any integer that divides both" << endl;
  cout << aa << " and " << bb << " must also divide " << d << "." << endl;
  cout << endl;
  cout << "QED" << endl;

  return 0;
}
