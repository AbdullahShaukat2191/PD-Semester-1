#include <iostream>
using namespace std;
main() {
 cout<<"Number of Minutes: ";
 int minutes;
 cin>> minutes;
 cout<<"Frames per second: ";
 int fps;
 cin>> fps;
 float sec = minutes*60;
 cout<<"Total no. of Frames: "<<fps*sec;
}