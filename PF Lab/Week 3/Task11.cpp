#include <iostream>
using namespace std;
main() {
 cout<<"Enter name of Team: ";
 string team;
 cin>> team;
 cout<<"Enter no. of wins: ";
 float win;
 cin >> win;
 cout<<"Enter no. of losses: ";
 float loss;
 cin >> loss;
 cout<<"Enter no. of draws: ";
 float draw;
 cin >> draw;
 int points = win*3 + loss*0 + draw*1;
 cout<<"The total points gained by "<<team<<" are: "<<points;
}