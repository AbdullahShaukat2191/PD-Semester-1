#include <iostream>
using namespace std;
void duration(float, float, float, float);

main ()
{

 float hour, minute;
 cout << "Enter hours: ";
 cin >> hour;
 float sec_hour = hour *60*60;
 cout << "Enter minutes: ";
 cin >> minute;
 float sec_min = minute*60;
 
 duration(sec_hour, sec_min , hour, minute);

}

void duration(float sec_hour, float sec_min, float hour , float minute)
{

 if (sec_hour > sec_min)
  {
    cout << hour << " hours is longer";
  }
 else
  {
    cout << minute << " minutes is longer";
  }
}