#include <iostream>
using namespace std;
void bonus(int, int);

main ()
{

 int a, b;
 cout << "Enter your Position: ";
 cin >> a;
 cout << "Enter your Friend's Position: ";
 cin >> b;
 
 bonus(a, b);

}

void bonus(int x, int y)
{

 if (y-x < 7)
  {
    cout << "True , a bonus is Possible";
  }
 else
  {
    cout << "False , I'm afraid a bonus is impossible";
  }
}