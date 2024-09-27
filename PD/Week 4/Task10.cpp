#include <iostream>
using namespace std;
void Reverse(string);
main ()
{

 string input;
 cout << "Enter True/False: ";
 cin >> input;
 Reverse(input);

}

void Reverse(string x)
{

 if (x == "true")
  {
    cout << " False ";
  }
 if ( x == "false")
  {
    cout << " True ";
  }
}