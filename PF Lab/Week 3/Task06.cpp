#include <iostream>
using namespace std;
main() {
 cout<<"Enter your Name: ";
 string name;
 cin >> name;
 cout<<"Enter Matric Marks (1100): ";
 float matric_marks;
 cin >> matric_marks;
 cout<<"Enter Inter Marks (570): ";
 float inter_marks;
 cin >> inter_marks;
 cout<<"Enter Ecat Marks (400): ";
 float ecat_marks;
 cin >> ecat_marks;
 float aggregate = ((matric_marks/1100)*10) +  ((inter_marks/570)*40) + ((ecat_marks/400)*50);
 cout<<"Your aggregate is: "<<aggregate;
}