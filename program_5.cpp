// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_5
#include <iostream>

 int main(){
   using namespace std;
   int number;
   cout<<"Enter the positive number less than 4,000 that you wish to convert: ";
   cin>>number;
   cout<<"The roman numeral is  ";
   //greater than 1000
   if(number>=1000){
     int m= number/1000;
     if(m==1){
     cout<<"M";
     }
     else if (m==2) {
       cout<<"MM";
     }
     else if (m==3) {
       cout<<"MMM";
     }
     number = number %1000;
   }
   // <1000
   if ( number>=900){
     cout<<"CM";
     number =number%900;
   }
   else if (number>=500){
     cout<<"D";
     number = number%500;
   }
   //100s
   if (number>=100){
     int c= number/100;
     if(c==1){
       cout<<"C";
     }
     else if(c==2){
       cout<<"CC";
     }
     else if(c==3){
       cout<<"CCC";
     }
     else if(c==4){
       cout<<"CD";
     }
     number = number %100;
   }
   //10s
   if(number>=90){
     cout<<"XC";
     number=number%90;
   }
   else if(number>=50){
     cout<<"L";
     number=number%50;
   }

   if(number>=10){
     int x =number/10;
     if(x==1){
       cout<<"X";
     }
     else if(x==2){
       cout<<"XX";
     }
     else if(x==3){
       cout<<"XXX";
     }
     else if(x==4){
       cout<<"XL";
     }
     number = number %10;
   }
   //1s
   if(number>=9){
     cout<<"IX";
   }
   else if(number >=5){
     cout<<"V";
     number=number%5;
   }

   if(number==4){
     cout<<"IV";
   }
   else if(number==3){
     cout<<"III";
   }
   else if(number==2){
     cout<<"II";
   }
   else if(number==1){
     cout<<"I";
   }
   cout<< endl;
 }
