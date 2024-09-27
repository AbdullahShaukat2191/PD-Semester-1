#include<iostream>
using namespace std;
void calculator();
void sum(float, float);
void subtraction(float, float);
void div(float, float);
void product(float, float);
main() {

 calculator();

}
 void calculator()
{

 float num1, num2;
 cout << "Enter Numner 1: ";
 cin >> num1;
 cout << "Enter Numner 2: ";
 cin >> num2;
 char op;
 cout << "Enter the operator (+,-,*,/): ";
 cin >> op;
 if (op == '+')
 {
  sum(num1, num2);
 }
 if (op == '/')
 {
  div(num1, num2);
 }
 if (op == '*')
 {
  product(num1, num2);
 }
 if (op == '-')
 {
  subtraction(num1, num2);
 }
}

 void sum(float x, float y)
 {
 cout << "The Result of Addition: " << x+y;
 }
 void subtraction(float x, float y)
 {
 cout << "The Result of Subtraction is: " << x-y;
 }
 void product(float x, float y)
 {
 cout << "The Result of Multiplication is: " << x*y;
 }
 void div(float x, float y)
 {
 cout << "Result of Division is: " << x/y;
 }