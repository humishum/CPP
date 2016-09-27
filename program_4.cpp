// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_4
#include <iostream>

int main(){
using namespace std;

int number;
cout<<"Enter an integer between 2 and 1000 (inclusive): "<<endl;
cin>>number;
//program enclosing loop to see if number is between 2 and 1000
if(number>1&&number<1001){
  //first 11 prime numbers test
if (number>1 && number<32) {
  if(number==2 ||number==3 ||number==5 ||number==7 ||number==11 ||number==13 ||number==17 ||number==19 ||number==23 ||number==29 ||number==31 ){
    cout<<number<<" is prime."<<endl;
  }
}
//begin divisor if statements
else if(number%2==0 ||number%3==0 ||number%5==0 ||number%7==0 ||number%11==0 ||number%13==0 ||number%17==0 ||number%19==0 ||number%23==0 ||number%29==0 ||number%31==0 ){
cout<<number<<" is divisible by ";
  if (number%2==0) {
    cout<<"2, ";
  }
   if(number%3==0){
    cout<<"3, ";
  }
   if(number%5==0){
    cout<<"5, ";
  }
   if(number%7==0){
    cout<<"7, ";
  }
   if(number%11==0){
    cout<<"11, ";
  }
   if(number%13==0){
    cout<<"13, ";
  }
   if(number%17==0){
    cout<<"17, ";
  }
   if(number%19==0){
    cout<<"19, ";
  }
   if(number%23==0){
    cout<<"23, ";
  }
   if(number%29==0){
    cout<<"29, ";
  }
   if(number%31==0){
    cout<<"31, ";
  }
    cout<<endl;
    cout<<"and "<<number<<" is not a prime."<<endl;

}
else{
  cout<<endl;
  cout<<number<<" is a prime."<<endl;
}
}
else{
  cout<<"You must enter a number between 2 and 1000 (inclusive)."<<endl;
}
return 0;
}
