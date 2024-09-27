#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int, int);
void moveplayer(int, int);

 main ()
{

 int x = 4, y = 4;
 system("cls");
 printMaze();
 while(true)
 {
  moveplayer(x, y);
  x += 1;
  if (x > 29)
  {
    x = 4;
  }
  gotoxy(1,25);
 }

}

 void moveplayer(int x, int y)
{

 gotoxy(x, y);
 cout << "P";
 Sleep(300);
 gotoxy(x, y);
 cout << " ";
}

 void printMaze()
{
 
 cout << "################################" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "#                              #" << endl;
 cout << "################################" << endl;
}

 void gotoxy(int x, int y)
{

 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}