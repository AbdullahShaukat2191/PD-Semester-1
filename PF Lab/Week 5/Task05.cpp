#include <iostream>
#include <cmath>
using namespace std;
float discriminant(float, float, float);
main() 
{
 float a, b, c, dis, root1, root2, root3, root4;
 cout << "Enter the value of a: ";
 cin >> a;
 cout << "Enter the value of b: ";
 cin >> b;
 cout << "Enter the value of c: ";
 cin >> c;
 dis = discriminant(a, b, c);
 if (dis > 0)
 {
  cout << "Two real Roots" << endl;
  root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
  cout << root1 << " and ";
  root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
  cout << root2;
 }
 if(dis == 0)
 {
  cout << "One real Roots" << endl;
  root1 = (-b)/2*a;
  cout << root1 <<"    ";
 }
 if (dis < 0)
 {
  cout << "Two complex Roots" << endl; 
  root1 = ((-b)/2*a);
  root2 = sqrt(-(b*b-4*a*c))/2*a;
  root3 = ((-b)/2*a);
  root4 = sqrt(-(b*b-4*a*c))/2*a;
  cout << root1 << " + " << root2 << "i and "<< root3 << " + "<< root4 <<"i";
 }
}

float discriminant(float x, float y, float z)
{
 float result = y*y - 4*x*z;
 return result;
}