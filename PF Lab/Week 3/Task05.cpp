#include <iostream>
using namespace std;
main() {
 cout<<"Enter Charge: ";
 int charge;
 cin >> charge;
 cout<<"Enter time: ";
 int time;
 cin >> time;
 int current = charge/time;
 cout<<"Current is: "<<current;
}