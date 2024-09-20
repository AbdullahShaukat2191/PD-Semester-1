#include <iostream>
using namespace std;
main() {
 cout<<"Enter voltage (volts): ";
 float voltage ;
 cin >> voltage;
 cout<<"Enter current (ampere): ";
 float current ;
 cin >> current;
 float power = voltage*current;
 cout<<"The power is "<<power<<" watts";
}