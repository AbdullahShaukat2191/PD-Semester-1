#include <iostream>
using namespace std;
void IsEqual(int, int);
main ()
{

 int num1, num2;
 cout << "Enter the 1st number: ";
 cin >> num1;
 cout << "Enter the 2nd number: ";
 cin >> num2;
 IsEqual(num1, num2);

}

void IsEqual(int x, int y)
{

 if (x ==y)
  {
    cout << " (True) Inputs are Equal";
  }
 else
  {
    cout << " (False) Inputs aren't Equal";
  }
}