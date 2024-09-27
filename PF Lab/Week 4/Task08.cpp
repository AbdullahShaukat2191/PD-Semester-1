#include<iostream>
using namespace std;
void discount(float, string);
main() 
{
 float amount;
 cout << "Enter the Total Purchase Amount: ";
 cin >> amount;
 string day;
 cout << "Enter the day of purchase: ";
 cin >> day;
 discount(amount, day);
}

void discount(float x, string y)
{
 float discounted = x-(x/100)*10;
 if (y == "sunday")
 {
  cout << "The Discounted Price is: " << discounted;
 }
 else
 {
  cout << "No Discount, payable Amount is: " << x;
 }
} 