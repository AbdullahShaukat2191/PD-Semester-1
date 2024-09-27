#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int, int);

 main ()
{

 gotoxy(50, 15);
 cout << "\"Abdullah Shaukat\"";
 gotoxy(1, 35);
}

 void gotoxy(int x, int y)
{

 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}