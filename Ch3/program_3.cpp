// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_3
#include <iostream>

int main() {

  using namespace std;

  double price;
  double paid;
  double net;
  cout<<"Enter the amount due:";
  cin>>price;
  cout<<" Enter the amount received: ";
  cin>>paid;
  net = paid-price+.005;
  cout<<"The change is: "<<endl;
  int change, dollars, quarters, dimes, nickels, pennies;


    dollars=net/1;
    change = dollars%1;
    net -= 1*dollars;
    change =net*100;


    quarters = change / 25;
    change = change % 25;
    dimes = change / 10;
    change = change % 10;
    nickels = change / 5;
    pennies = change % 5;

    cout <<"Dollars: "<< dollars<<endl;
    cout <<"Quarters: " << quarters << endl; // display # of quarters
    cout <<"Dimes: " << dimes << endl; // display # of dimes
    cout <<"Nickels: " << nickels << endl; // display # of nickels
    cout <<"Pennies: " << pennies ;
  return 0;
}
