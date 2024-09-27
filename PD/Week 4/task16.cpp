#include <iostream>
using namespace std;
void sleep(float);
void play(float);

main ()
{

 float working_days, holidays, play_min;
 cout << "Enter no. of Holidays: ";
 cin >> holidays;
 working_days = 365 - holidays;
 play_min = working_days*63 + 127*holidays; 
 sleep(play_min);
 play(play_min);
}

void sleep(float x)
{
 if ( x < 30000)
  {
    cout << "Tom Slept like a KING!" << endl;
  }
 else
  {
    cout << "Tom's gonna die" << endl;
  }
}

void play(float x)
 {
  float diff_mins = 30000-x;
  float diff_hours = diff_mins/60;
  if (diff_hours > 0)
  {
  cout << diff_hours << " hours less for play";
  }
  else
  {
  cout << diff_hours << " hours for play";
  }
 }