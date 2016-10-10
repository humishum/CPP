// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_8
#include <iostream>

int main(){
  using namespace std;
  int firstNumber,secondNumber,position,nthNumber;

  cout<<"Enter the first two Fibonacci numbers: "<<endl;
  cin>>firstNumber>>secondNumber;
  cout<<"The first two Fibonacci numbers are "<<firstNumber<<" and "<<secondNumber<<endl;
  cout<<"Enter the position of the desired Fibonacci number: "<<endl;
  cin>>position;

  nthNumber= firstNumber;

if(position==1){
  cout<<"The Fibonacci number at position 1 is "<<firstNumber<<endl;
}
else if(position==2){
  cout<<"The Fibonacci number at position 2 is "<<secondNumber<<endl;
}
else if(position>2){
  int postFirst= firstNumber;
  int postSecond= secondNumber;

      for(int i=3; i<=position; i++){
          nthNumber=postFirst+postSecond;
          postFirst=postSecond;
          postSecond=nthNumber;
  }
  cout<<"The Fibonacci number at position "<<position<<" is "<<nthNumber<<endl;
}




}
