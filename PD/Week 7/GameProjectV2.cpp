#include <iostream>
#include <windows.h>
#include <random>

using namespace std;

void gotoxy(int, int);
char getCharAtxy(short int, short int);
int ran(int x, int y);
void printMaze();
void printScore();
void incrementScore();

void eraseEnemy1();
void printEnemy1();
void moveEnemy1();

void eraseEnemy2();
void printEnemy2();
void moveEnemy2();

void eraseEnemy3();
void printEnemy3();
void moveEnemy3();

void printPill();
void erasePill();

void erasePlayer();
void printPlayer();

void movePlayerUp();
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();

int e1X = 75, e1Y = 3;
int e2X = 75, e2Y = 18;
int e3X = 5 , e3Y = 3;
int pX = 5, pY = 15;
int pillX = ran(12, 45), pillY = ran(6, 27);
int score = 0;
bool goDown1 = true;
bool goDown2 = true;
bool goLeft = true;

main() {
    system("cls");
    printMaze();
    printPlayer();
    printPill();

    while (true) {
        printScore();

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
        moveEnemy3();
        Sleep(50);
    }
}

void printEnemy1() {
    gotoxy(e1X,e1Y+1);
    cout << "  //-||-||-/";
    gotoxy(e1X,e1Y+2);
    cout << "<  <KILL> <";
    gotoxy(e1X,e1Y+3);
    cout << "  \\\\-||-||-\\";
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
     if(e1Y == 15)
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
    gotoxy(e2X-1,e2Y+1);
    cout << "  //-||-||-/";
    gotoxy(e2X-2,e2Y+2);
    cout << "<  <KILL> <";
    gotoxy(e2X-3,e2Y+3);
    cout << "  \\\\-||-||-\\";
}

void eraseEnemy2() {
    gotoxy(e2X,e2Y);
    cout << "            ";
    gotoxy(e2X-1,e2Y+1);
    cout << "            ";
    gotoxy(e2X-2,e2Y+2);
    cout << "            ";
    gotoxy(e2X-3,e2Y+3);
    cout << "            ";
    gotoxy(e2X-4,e2Y+4);
    cout << "            ";
}

void moveEnemy2() {
    
    if (goDown2) {
        eraseEnemy2();
        printEnemy2();
        e2X = e2X - 1;
        e2Y = e2Y + 1;
     if(e2Y == 28)
    {
        goDown2 = false;
    }
    }
    else if (!goDown2) {
        eraseEnemy2();
        printEnemy2();
        e2X = e2X + 1;
        e2Y = e2Y - 1;
    if (e2Y == 18) 
    {
        goDown2 = true;
    }
    }
}
void printEnemy3() {
    gotoxy(e3X,e3Y);
    cout << "  //-||-||-/";
    gotoxy(e3X,e3Y+1);
    cout << "<  <KILL> <";
    gotoxy(e3X,e3Y+2);
    cout << "  \\\\-||-||-\\";
}

void eraseEnemy3() {
    gotoxy(e3X-1,e3Y);
    cout << "              ";
    gotoxy(e3X-1,e3Y+1);
    cout << "              ";
    gotoxy(e3X-1,e3Y+2);
    cout << "              ";
}

void moveEnemy3() {
    
    if (goLeft) {
        eraseEnemy3();
        printEnemy3();
        
        e3X = e3X + 1;
     if(e3X == 45)
    {
        goLeft = false;
    }
    }
    else if (!goLeft) {
        eraseEnemy3();
        printEnemy3();
        
        e3X = e3X - 1;
    if (e1Y == 2) 
    {
        goLeft = true;
    }
    }
}

void printPill() {
    gotoxy(pillX,pillY);
    cout << " . ";
    gotoxy(pillX,pillY+1);
    cout << "...";
    gotoxy(pillX,pillY+2);
    cout << " . ";
}

void erasePill() {
    gotoxy(pillX,pillY);
    cout << "   ";
    gotoxy(pillX,pillY+1);
    cout << "   ";
    gotoxy(pillX,pillY+2);
    cout << "   ";
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
    cout << "--------";
    gotoxy(pX, pY+1);
    cout << "\\-||-||-\\\\";
    gotoxy(pX, pY+2);
    cout << " ><SAVIOR> >";
    gotoxy(pX, pY+3);
    cout << "/-||-||-//";
    gotoxy(pX, pY+4);
    cout << "--------";
}

void movePlayerUp() {
        if (getCharAtxy(pX, pY-1) == ' ') {
            erasePlayer();
            pY = pY - 1;
            printPlayer();
    }
    if (getCharAtxy(pX+3, pY+5) == '.') {
        erasePill();
        incrementScore();
    }
}

void movePlayerDown() {
        if (getCharAtxy(pX, pY+5) == ' ') {
            erasePlayer();
            pY = pY + 1;
            printPlayer();
    }
    if (getCharAtxy(pX+3 , pY + 7) == '.') {
        erasePill();
        incrementScore();
    }
}
void movePlayerLeft() {
        if (getCharAtxy(pX-2, pY) == ' ') {
    erasePlayer();
    pX = pX - 2;
    printPlayer();
    }
    if (getCharAtxy(pX-1, pY + 2) == '.') {
        erasePill();
        incrementScore();
    }
}

void movePlayerRight() {
    if (getCharAtxy(pX + 14, pY) == ' ') {
        erasePlayer();
        pX = pX + 2;
        printPlayer();
    }
    if (getCharAtxy(pX+13, pY+2) == '.') {
        erasePill();
        incrementScore();
    }
}

void printScore() {
    gotoxy(100, 2);
    cout << "SCORE:" <<score;
}

void incrementScore()
{
    score += 50;
}

void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int ran(int x, int y) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(x, y);

    return distrib(gen);
}

char getCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
    : ' ';
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
    cout << "##                                                                                         ##" << endl;
    cout << "#############################################################################################" << endl;
    cout << "#############################################################################################" << endl;
}