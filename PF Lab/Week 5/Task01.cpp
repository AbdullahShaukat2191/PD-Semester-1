#include <iostream>
#include <cmath>
using namespace std;
int minimum(int, int);
main() 
{
 int num1, num2, result ;
 cout << "Enter the first number : " ;
 cin >> num1 ; 
 cout << "Enter the second number : " ;
 cin >> num2 ;
 result = minimum(num1, num2) ;
 cout << "The Lesser of "<<num1<<" and "<<num2<<" is: "<< result ;
}

int minimum(int n1, int n2)
{
 int lesser = min(n1, n2);
 return lesser;
}