#include<iostream>
using namespace std;
void discount(float, string);
main() 
{
 while(true)
 {
 float amount;
 cout << "Enter the Total Purchase Amount: ";
 cin >> amount;
 string day;
 cout << "Enter the day of purchase: ";
 cin >> day;
 discount(amount, day);
 }
}

void discount(float x, string y)
{
 float discounted = x-(x/100)*10;
 float less_discount = x-(x/100)*5;
 if (y == "sunday")
 {
  cout << "The Discounted Price is: " << discounted << endl;
 }
 else
 {
  cout << "The Discounted Price is: " << less_discount << endl;
 }
} 