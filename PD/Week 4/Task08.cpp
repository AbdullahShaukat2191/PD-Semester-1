#include <iostream>
using namespace std;
void header();

main ()
{
  header();
  cout << "Student 1: Enter your Name: ";
  string name1;
  cin >> name1;
  cout << "Enter your Matric Marks: ";
  float m_marks1;
  cin >> m_marks1;
  cout << "Enter your Inter Marks: ";
  float i_marks1;
  cin >> i_marks1;
  cout << "Enter Ecat Marks: ";
  float e_marks1;
  cin >> e_marks1;
  float aggregate1 = (m_marks1/1100)*30 + (i_marks1/570)*30 + (e_marks1/400)*40;
  cout << name1 << "'s aggregate is: " << aggregate1 << endl;

  cout << "Student 2: Enter your Name: ";
  string name2;
  cin >> name2;
  cout << "Enter your Matric Marks: ";
  float m_marks2;
  cin >> m_marks2;
  cout << "Enter your Inter Marks: ";
  float i_marks2;
  cin >> i_marks2;
  cout << "Enter Ecat Marks: ";
  float e_marks2;
  cin >> e_marks2;
  float aggregate2 = (m_marks2/1100)*30 + (i_marks2/570)*30 + (e_marks2/400)*40;
  cout << name2 << "'s aggregate is: " << aggregate2 << endl;
 if (e_marks1 > e_marks2)
 {
   cout << "Roll no.1 is: " <<name1;
 }
 else
 { 
   cout << "Roll no.1 is: "<<name2;
 }
}

void header()
{
 cout << "                      Univeristy of Engineering and Technology, Lahore  " << endl;
 cout << "                                  Main Menu                             " << endl;
}