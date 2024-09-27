#include<iostream>
using namespace std;
void fuel();
main() {

 fuel();

}
 void fuel()
{

 float fuel, dis;
 cout << "Enter Distance travelled: ";
 cin >> dis;
 fuel = dis*10;
 if (fuel > 99)
 {
 cout << "The Total fuel required is: " << fuel;
 }
 else
 {
  cout << "Fuel Needed: 100";
 }
}