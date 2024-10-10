#include <iostream>
#include <cmath>
using namespace std;
float s_root(float);
main() 
{
 float num1, result;
 cout << "Enter a number : " ;
 cin >> num1 ;
 result = s_root(num1) ;
 cout << "The Square Root of "<<num1<<" is: "<< result ;
}

float s_root(float n1)
{
 int sq_root = sqrt(n1);
 return sq_root;
}