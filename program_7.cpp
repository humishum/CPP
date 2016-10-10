// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_4

#include<iostream>
using namespace std;

int main(){
  int number;
  cout<<"Enter an integer greater than or equal to 2: "<<endl;
  cin>>number;
//prime factorization
int primeFactor;
for (int i=2; i <= num; i++)
{
 while(number % i == 0)
 {
   number /= i;// "num" divided by "i" is now "num"
   answer+=i;
   cout<<i<<" ";
 }
}

//prime number
  int counter;
for(int i=1;i<=number;i++){
  if(number%i==0){
    counter++;
  }
}

if(counter==2){
  cout<<"The number,"<<number<<",is a prime number.";
}
else{
  cout<<"The number,"<<number<<",is not a prime number.";
}


}
