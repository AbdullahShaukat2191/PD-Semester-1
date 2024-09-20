#include <iostream>
using namespace std;
main() {
 cout<<"Enter Weight in Pounds: ";
 int weight_lb;
 cin >>weight_lb;
 int weight_kg = weight_lb*0.45;
 cout<<"That is "<<weight_kg<<" in kgs";
}