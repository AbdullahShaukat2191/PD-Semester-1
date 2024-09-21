#include <iostream>
using namespace std;
main() {
 cout << "Enter a 4-digit number: ";
 int n;
 cin >> n;
 int d4 = n%10;
 n = n/10;
 int d3 = n%10;
 n = n/10;
 int d2 = n%10;
 n = n/10;
 int d1 = n%10;
 cout << "Sum of digits is: " << d1+d2+d3+d4;
}