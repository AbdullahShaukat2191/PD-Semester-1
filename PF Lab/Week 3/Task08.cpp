#include <iostream>
using namespace std;
main() {
 cout<<"Enter time in hours: ";
 float hour ;
 cin >> hour;
 float minute = hour*60;
 float second = minute*60;
 cout<<"That is "<<second<<" in seconds";
}