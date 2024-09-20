#include <iostream>
using namespace std;
main() {
 cout<<"Enter Initial Velocity (m/s): ";
 float iv;
 cin>> iv;
 cout<<"Enter Acceleration (m/s^2): ";
 float acc;
 cin>> acc;
 cout<<"Enter Time (s): ";
 float time;
 cin>> time;
 float fv =acc*time+iv;
 cout<<"Final Velocity = "<<fv;
}