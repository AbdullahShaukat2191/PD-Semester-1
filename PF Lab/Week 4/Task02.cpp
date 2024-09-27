#include<iostream>
using namespace std;
void convert();
main() {

 convert();

}
 void convert()
{

 float inch, feet;
 cout << "Enter Length(inches): ";
 cin >> inch;
 feet = inch/12;
 cout << "Lenght in feet is: " << feet;

}