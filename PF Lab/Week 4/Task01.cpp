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
 cout << "Total fuel needed is: " << fuel;

}