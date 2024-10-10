#include <iostream>
#include <cmath>
using namespace std;
int power(int, int);
main() 
{
 int num1, num2, result ;
 cout << "Enter the first number : " ;
 cin >> num1 ; 
 cout << "Enter the second number : " ;
 cin >> num2 ;
 result = power(num1, num2) ;
 cout << num1 << " raised to the power of " << num2 << " is : " << result ;
}

int power(int n1, int n2)
{
 int exponent = pow(n1, n2);
 return exponent;
}