// Humdaan Mustafa
// cs-102, period 4, Fall 2016
//Program_2
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
// Input first number
cout << "Please enter an integer number: ";
int firstNumber;
cin >> firstNumber;
//Input second number
cout << "Please enter a second integer number: "<<endl;
int secondNumber;
cin >> secondNumber;
//Sum
float sum = firstNumber+secondNumber;
cout << "The sum of the numbers: " << setw(18) << sum << endl;
//Difference
int diff = firstNumber- secondNumber;
cout <<"The difference of the numbers:"<< setw(12) << diff<<endl;
//Product
int prod = firstNumber*secondNumber;
cout << "The product of the numbers:"<< setw(15) << prod<<endl;
//Average
float average = sum/2;
cout <<"The average of the numbers:"<< setw(15)<< fixed <<setprecision(2) << average<< endl;
}
