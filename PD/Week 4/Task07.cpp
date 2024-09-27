#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int, int);
void moveplayer(int, int);

 main ()
{

 int x = 7, y = 3;
 system("cls");
 printMaze();
 while(true)
{
 while(true)
 {
  moveplayer(x, y);
  y += 1;
  if( y > 10 )
   {
     break;
   }
 }
 while(true)
 {
  moveplayer(x, y);
  y -= 1;
  if( y < 2 )
   {
   break;
   }
 }
}
}

 void moveplayer(int x, int y)
{

 gotoxy(x, y);
 cout << "P";
 Sleep(200);
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