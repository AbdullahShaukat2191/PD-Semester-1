#include <iostream>
using namespace std;
main() {
 cout << "Enter the person's age: ";
 int age ;
 cin >> age ;
 cout << "Enter the number of times they've moved: ";
 int move ;
 cin >> move ;
 move = move +1;
 int average = age/move;
 cout << "Average no. of years lived in the same house: " << average;

}