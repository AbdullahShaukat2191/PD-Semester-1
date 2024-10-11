#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int, int);
void printMaze();
void moveplayer();
void eraseEnemy1();
void printEnemy1();
void moveEnemy1();
void eraseEnemy2();
void printEnemy2();
void moveEnemy2();
void erasePlayer();
void printPlayer();
void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();

int e1X = 74, e1Y = 2;
int e2X = 74, e2Y = 16;
int pX = 5, pY = 15;
bool goDown1 = true;
bool goDown2 = true;

main() {
    system("cls");
    printMaze();
    printPlayer();
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            movePlayerDown();
        }
        if (GetAsyncKeyState(VK_LEFT)) {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            movePlayerRight();
        }
        moveEnemy1();
        moveEnemy2();
        Sleep(150);
    }
}


void printEnemy1() {
    gotoxy(e1X,e1Y);
    cout << "    --------";
    gotoxy(e1X,e1Y+1);
    cout << "  //-||-||-/";
    gotoxy(e1X,e1Y+2);
    cout << "<  <KILL> <";
    gotoxy(e1X,e1Y+3);
    cout << "  \\\\-||-||-\\";
    gotoxy(e1X,e1Y+4);
    cout << "    --------";
}

void eraseEnemy1() {
    gotoxy(e1X,e1Y);
    cout << "            ";
    gotoxy(e1X,e1Y+1);
    cout << "            ";
    gotoxy(e1X,e1Y+2);
    cout << "            ";
    gotoxy(e1X,e1Y+3);
    cout << "            ";
    gotoxy(e1X,e1Y+4);
    cout << "            ";
}

void moveEnemy1() {
    
    if (goDown1) {
        eraseEnemy1();
        printEnemy1();
        
        e1Y = e1Y + 1;
     if(e1Y == 13)
    {
        goDown1 = false;
    }
    }
    else if (!goDown1) {
        eraseEnemy1();
        printEnemy1();
        
        e1Y = e1Y - 1;
    if (e1Y == 2) 
    {
        goDown1 = true;
    }
    }
}

void printEnemy2() {
    gotoxy(e2X,e2Y);
    cout << "    --------";
    gotoxy(e2X,e2Y+1);
    cout << "  //-||-||-/";
    gotoxy(e2X,e2Y+2);
    cout << "<  <KILL> <";
    gotoxy(e2X,e2Y+3);
    cout << "  \\\\-||-||-\\";
    gotoxy(e2X,e2Y+4);
    cout << "    --------";
}

void eraseEnemy2() {
    gotoxy(e2X,e2Y);
    cout << "            ";
    gotoxy(e2X,e2Y+1);
    cout << "            ";
    gotoxy(e2X,e2Y+2);
    cout << "            ";
    gotoxy(e2X,e2Y+3);
    cout << "            ";
    gotoxy(e2X,e2Y+4);
    cout << "            ";
}

void moveEnemy2() {
    
    if (goDown2) {
        eraseEnemy2();
        printEnemy2();
        
        e2Y = e2Y + 1;
     if(e2Y == 28)
    {
        goDown2 = false;
    }
    }
    else if (!goDown2) {
        eraseEnemy2();
        printEnemy2();
        
        e2Y = e2Y - 1;
    if (e2Y == 16) 
    {
        goDown2 = true;
    }
    }
}

void erasePlayer() {
    gotoxy(pX,pY);
    cout << "            ";
    gotoxy(pX, pY+1);
    cout << "            ";
    gotoxy(pX, pY+2);
    cout << "            ";
    gotoxy(pX, pY+3);
    cout << "            ";
    gotoxy(pX, pY+4);
    cout << "            ";
}

void printPlayer() {
    gotoxy(pX,pY);
    cout << "--------      ";
    gotoxy(pX, pY+1);
    cout << "\\-||-||-\\\\    ";
    gotoxy(pX, pY+2);
    cout << " ><SAVIOR> >";
    gotoxy(pX, pY+3);
    cout << "/-||-||-//    ";
    gotoxy(pX, pY+4);
    cout << "--------      ";
}

void movePlayerUp() {
    erasePlayer();
    pY = pY - 1;
    printPlayer();
}

void movePlayerDown() {
    erasePlayer();
    pY = pY + 1;
    printPlayer();
}

void movePlayerLeft() {
    erasePlayer();
    pX = pX - 1;
    printPlayer();
}

void movePlayerRight() {
    erasePlayer();
    pX = pX + 1;
    printPlayer();
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze() {
    cout << "#############################################################################################" << endl;
    cout << "#############################################################################################" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "##                                                                                         ##" << endl;
    cout << "#############################################################################################" << endl;
    cout << "#############################################################################################" << endl;
}