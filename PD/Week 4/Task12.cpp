#include <iostream>
using namespace std;
void challan(int);

main ()
{

 int speed;
 cout << "Enter your Speed: ";
 cin >> speed;
 
 challan(speed);

}

void challan(int x)
{

 if (x > 100)
  {
    cout << "Halt... THOU SHALT BE EXECUTED!!!";
  }
 else
  {
    cout << "You're a good Law abiding citizen!";
  }
}