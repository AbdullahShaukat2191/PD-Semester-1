#include<iostream>
using namespace std;
void result();
main() {

 result();

}
 void result()
{

 int marks;
 cout << "Enter your score: ";
 cin >> marks;
 if (marks > 50)
 {
  cout << "Passed"; 
 }
 if (marks <= 50)
 {
  cout << "Fail";
 }
}