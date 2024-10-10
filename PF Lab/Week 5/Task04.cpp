#include <iostream>
#include <cmath>
using namespace std;
float height(float, float);
main() 
{
 float base, angle, angle_rad, result;
 cout << "Enter the distance from the tree (feet) : " ;
 cin >> base;
 cout << "Enter Angle of elevation (degrees) : " ;
 cin >> angle;
 angle_rad = angle/57.2958;
 result = height(base, angle_rad);
 cout << "The Height of the tree is: "<< result << " feet";

}

float height(float b, float a)
{
 int result = tan(a)*b;
 return result;
}