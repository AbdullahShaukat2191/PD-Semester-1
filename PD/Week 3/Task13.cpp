#include <iostream>
using namespace std;
main() {
 cout << "Enter 1st digit: ";
 int n ;
 cin >> n ;
 int sum = n;
 cout << "Enter 2nd digit: ";
 cin >> n ;
 sum = sum +n;
 cout << "Enter 3rd digit: ";
 cin >> n ;
 sum = sum +n;
 cout << "Enter 4th digit: ";
 cin >> n ;
 sum = sum +n;
 cout << "Enter 5th digit: ";
 cin >> n ;
 sum = sum +n;
 cout << "Sum of the digits is: " <<sum;
}