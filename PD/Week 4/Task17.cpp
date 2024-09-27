#include <iostream>
using namespace std;
void check(float, float, float);

main ()
{

 float people, tp_roll, sheets, consumed_1_day, consumed_14_days;
 cout << "Enter no. of people in the household: ";
 cin >> people;
 cout << "Number of rolls of Tissue paper: ";
 cin >> tp_roll;
 sheets = tp_roll * 500;
 consumed_1_day = people*57;
 consumed_14_days = consumed_1_day*14;
 check(consumed_14_days, sheets, consumed_1_day);
}

void check(float x, float y , float z)
{
  int tp_usability = y/z;
 if (x > y)
  {
    cout << "Your TP will only last "<<tp_usability<<" days, buy more !!" << endl;
  }
 else
  {
    cout << "Your TP will last "<<tp_usability<<" days, no need to panic!" << endl;
  }
}