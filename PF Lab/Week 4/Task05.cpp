#include<iostream>
using namespace std;
void vote();
void eligible();
void illegible();
main() {

 vote();

}
 void vote()
{

 float age;
 cout << "Enter your Age: ";
 cin >> age;
 if (age >= 18)
 {
  cout << "You are Eligible to Vote"; 
 }
 if (age <= 18)
 {
  cout << "You are not Eligible to Vote";
 }
}