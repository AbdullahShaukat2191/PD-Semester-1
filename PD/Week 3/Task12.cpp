#include <iostream>
using namespace std;
main() {
 cout << "Number of Sq.meters you can paint: ";
 int sqmeter ;
 cin >> sqmeter ;
 cout << "Width of a single wall (meters) : ";
 int width ;
 cin >> width ;
 cout << "Height of single wall (meter): ";
 int height ;
 cin >> height ;
 int total = width * height;
 int walls = sqmeter/total;
 cout << "Number of walls you can paint: " << walls;
}