#include <iostream>
using namespace std;
main() {
 cout<<"Enter the Name of person: ";
 string name;
 cin>> name;
 cout<<"Enter the target weight loss in kilograms: ";
 float kg;
 cin>> kg;
 float days = kg*15;
 cout<<name<<" will need "<<days<<" days to lose "<<kg<<" kgs of weight as per the doctor's instructions";
}