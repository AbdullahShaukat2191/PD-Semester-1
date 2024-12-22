//Create a 2D Game including 3 Enemies, a Shooting and Score System, and a Health System.
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void gotoxy(int, int);   //Imported Functions
char getCharAtxy(short int, short int);

void printMaze();   //Function to print main Maze

void eraseEnemy1();   //Functions regarding Enemy 1
void printEnemy1();
void moveEnemy1();
void killedEnemy1();

void eraseEnemy2();   //Functions regarding Enemy 2
void printEnemy2();
void moveEnemy2();
void killedEnemy2();

void eraseEnemy3();   //Functions regarding Enemy 3
void printEnemy3();
void moveEnemy3();
void killedEnemy3();

void printPill();   //Functions regarding random appearing Pill
void erasePill();
void reSpawnPill();
int random(int, int);

void erasePlayer();   //Functions regarding main Player
void printPlayer();

void movePlayerUp();   //Functions dictating Player movement
void movePlayerDown();
void movePlayerLeft();
void movePlayerRight();
void checkPlayerCollision();

void printScore();   //Functions regarding Score System
void incrementScorePill();
void incrementScoreEnemy();

void printPlayerLives();   //Fucntions regarding
void decrementPlayerLives();
void incrementPlayerLives();

void shootBullet();   //Functions regarding Player Shooting Mechanism
void printPlayerBullet();
void erasePlayerBullet();

void enemy1Shoot();     //Functions regarding Enemy1's Shooting Mechanisms
void printEnemy1Bullet();
void eraseEnemy1Bullet();

void enemy2Shoot();     //Functions regarding Enemy2's Shooting Mechanisms
void printEnemy2Bullet();
void eraseEnemy2Bullet();

// void generateEnemy1Bullet();    //Sir's Method of Shooting
// void printEnemy1Bullet(int, int);
// void eraseEnemy1Bullet(int, int);
// void makeEnemy1BulletInactive(int);
// void moveEnemy1Bullet();

void printLogo();   //Functions regarding Game Aesthetics
void startScreen();
int selectDifficulty();
void countDown();   
int enemyCounter();
void winMessage();
void winningScreen();
void failMessage();
void failedScreen();
bool restartGame();

int enemy1X = 75, enemy1Y = 4;   //Co-ordinates and Game Mechanics
int enemy2X = 64, enemy2Y = 17;
int enemy3X = 5, enemy3Y = 2;
int playerX = 5, playerY = 14;
int pillX = random(15, 45), pillY = random(5, 21);
int score = 0, lives = 3;
int playerBullet = 0;
int enemy1Bullet = 0;
int enemy2Bullet = 0;
int enemy3Bullet = 0;

int enemy1BulletX[100], enemy1BulletY[100];
bool isEnemy1BulletActive[100];
int enemy1BulletCount = 0;

bool goDown1 = true;
bool goDown2 = true;
bool goLeft = true;
bool displayEnemy1 = true;
bool showKill1 = true;
bool displayEnemy2 = true;
bool showKill2 = true;
bool displayEnemy3 = true;
bool showKill3 = true;

main() {
    while (true) {

        system("cls");

        startScreen();
        int difficulty = selectDifficulty();
        countDown();

        printMaze();
        printPlayer();
        printPill();
        while (enemyCounter() != 0 && lives != 0) {

            printPlayerLives();
            printScore();
            enemyCounter();
            checkPlayerCollision();

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
            if (GetAsyncKeyState(VK_SPACE))
            {
                shootBullet();
            }

            if (displayEnemy1) {
                moveEnemy1();
            }
            else if (showKill1) {
                killedEnemy1();
                incrementPlayerLives();
                showKill1 = false;
            }
            if (displayEnemy2) {
                moveEnemy2();
            }
            else if (showKill2) {
                killedEnemy2();
                incrementPlayerLives();
                showKill2 = false;
            }
            if (displayEnemy3) {
                moveEnemy3();
            }
            else if (showKill3) {
                killedEnemy3();
                incrementPlayerLives();
                showKill3 = false;
            }
            if (difficulty == 1)
            Sleep(80);
            else if (difficulty == 2)
            Sleep(45);
            else if (difficulty == 3)
            Sleep(20);
            else if (difficulty == 4)
            Sleep(5);
        }
        if (enemyCounter() == 0) {
            printScore();
            printPlayerLives();
            winMessage();
            Sleep(1000);
            winningScreen();
        }
        else if (lives == 0) {
            printPlayerLives();
            failMessage();
            Sleep(1000);
            failedScreen();
        }
        if (restartGame()) {
            continue;
        }
        else
        {
            break;
        }
    }
}

void printEnemy1() {
    gotoxy(enemy1X,enemy1Y);
    cout << "  //-||-||-/";
    gotoxy(enemy1X,enemy1Y+1);
    cout << "<  <KILL> <";
    gotoxy(enemy1X,enemy1Y+2);
    cout << "  \\\\-||-||-\\";
}
void eraseEnemy1() {
    gotoxy(enemy1X,enemy1Y-1);
    cout << "            ";
    gotoxy(enemy1X,enemy1Y);
    cout << "            ";
    gotoxy(enemy1X,enemy1Y+1);
    cout << "            ";
    gotoxy(enemy1X,enemy1Y+2);
    cout << "            ";
    gotoxy(enemy1X,enemy1Y+3);
    cout << "            ";
}
void killedEnemy1() {
    eraseEnemy1();
    gotoxy(enemy1X, enemy1Y+1);
    cout << "Enemy Down!";
    Sleep(500);
    eraseEnemy1();
}
void moveEnemy1() {

    if (goDown1) {
        eraseEnemy1();
        enemy1Y += 1;
        printEnemy1();

        if(enemy1Y == 16)
        {
            goDown1 = false;
        }
    }
    else if (!goDown1) {
        eraseEnemy1();
        enemy1Y -= 1;
        printEnemy1();    

        if (enemy1Y == 4) 
        {
            goDown1 = true;
        }
    }
    if (enemy1Y+1 == playerY+2) {
        enemy1Shoot();
    }
}

void printEnemy2() {
    gotoxy(enemy2X,enemy2Y+1);
    cout << "  //-||-||-/";
    gotoxy(enemy2X,enemy2Y+2);
    cout << "<  <KILL> <";
    gotoxy(enemy2X,enemy2Y+3);
    cout << "  \\\\-||-||-\\";
}
void eraseEnemy2() {
    gotoxy(enemy2X-1,enemy2Y+1);
    cout << "             ";
    gotoxy(enemy2X,enemy2Y);
    cout << "             ";
    gotoxy(enemy2X,enemy2Y+1);
    cout << "             ";
    gotoxy(enemy2X,enemy2Y+2);
    cout << "             ";
    gotoxy(enemy2X+2,enemy2Y+4);
    cout << "             ";
}
void killedEnemy2() {
    eraseEnemy2();
    gotoxy(enemy2X, enemy2Y+1);
    cout << "Enemy Down!";
    Sleep(500);
    eraseEnemy2();
}
void moveEnemy2() {
    
    if (goDown2) {
        eraseEnemy2();
        printEnemy2();
        enemy2Y += 1;
        enemy2X += 1;

        if(enemy2Y == 29)
        {
            goDown2 = false;
        }
        if (enemy2Y+1 == playerY+2) {
            enemy2Shoot();
        }
    }
    else if (!goDown2) {
        eraseEnemy2();
        printEnemy2();
        enemy2X -= 1;
        enemy2Y -= 1;

        if (enemy2Y == 18)
        {
            goDown2 = true;
        }
        if (enemy2Y+4 == playerY+2) {
            enemy2Shoot();
        }
    }
}

void printEnemy3() {
    gotoxy(enemy3X,enemy3Y);
    cout << "  //-||-||-/";
    gotoxy(enemy3X,enemy3Y+1);
    cout << "<  <HUNK> <";
    gotoxy(enemy3X,enemy3Y+2);
    cout << "  \\\\-||-||-\\";
}
void eraseEnemy3() {
    gotoxy(enemy3X,enemy3Y);
    cout << "             ";
    gotoxy(enemy3X-1,enemy3Y+1);
    cout << "             ";
    gotoxy(enemy3X,enemy3Y+2);
    cout << "             ";
}
void killedEnemy3() {
    eraseEnemy3();
    gotoxy(enemy3X, enemy3Y+1);
    cout << "Enemy Down!";
    Sleep(500);
    eraseEnemy3();
}
void moveEnemy3() {
    
    if (goLeft) {
        eraseEnemy3();
        enemy3X += 1;
        printEnemy3();

        if(enemy3X == 70)
        {
            goLeft = false;
        }
    }
    else if (!goLeft) {
        eraseEnemy3();
        enemy3X -= 1;
        printEnemy3();

        if (enemy3X == 3)
        {
            goLeft = true;
        }
    }
}

void printPlayer() {
    gotoxy(playerX,playerY);
    cout << "---\\\\\\--";
    gotoxy(playerX,playerY+1);
    cout << "\\-||-||-\\\\";
    gotoxy(playerX,playerY+2);
    cout << " ><SAVIOR> >";
    gotoxy(playerX,playerY+3);
    cout << "/-||-||-//";
    gotoxy(playerX,playerY+4);
    cout << "---///--";
}
void erasePlayer() {
    gotoxy(playerX,playerY);
    cout << "            ";
    gotoxy(playerX,playerY+1);
    cout << "            ";
    gotoxy(playerX,playerY+2);
    cout << "            ";
    gotoxy(playerX,playerY+3);
    cout << "            ";
    gotoxy(playerX,playerY+4);
    cout << "            ";
}

void printPill() {
    gotoxy(pillX, pillY);
    cout << "$";
}
void erasePill() {
    gotoxy(pillX, pillY);
    cout << " ";
}
void reSpawnPill() {
	pillX = random(15, 45), pillY = random(5, 21);
	printPill();
}
int random(int x, int y) {
    srand(time(0));
    return x + rand() % y;
}

void printScore() {
    gotoxy(100, 5);
    cout << "SCORE: " << score;
}
void incrementScorePill() {
    score += 50;
}
void incrementScoreEnemy() {
    score += 100;
}

void printPlayerLives() {
    gotoxy(100, 2);
    cout << "Hearts: " << lives;
}
void decrementPlayerLives() {
    lives -= 1;
}
void incrementPlayerLives() {
    lives += 1;
}

int enemyCounter() {

    int enemyCount = 0;

    if ((displayEnemy1 + displayEnemy2 + displayEnemy3) == 3) {
        enemyCount = 3;
    }
    else if ((displayEnemy1 + displayEnemy2 + displayEnemy3) == 2) {
        enemyCount = 2;
    }
    else if ((displayEnemy1 + displayEnemy2 + displayEnemy3) == 1) {
        enemyCount = 1;
    }
    gotoxy(100 ,8);
    cout << "Remaining Enemies: " << enemyCount;

    return enemyCount;
}

void movePlayerUp() {
    if (getCharAtxy(playerX, playerY-1) == ' ') {
        erasePlayer();
        playerY -= 1;
        printPlayer();
    }
    if (getCharAtxy(playerX+3,playerY-1)=='$'||getCharAtxy(playerX+4,playerY-1)=='$'||getCharAtxy(playerX+5,playerY-1)=='$') {
        incrementScorePill();
        reSpawnPill();
    }
}
void movePlayerDown() {
    if (getCharAtxy(playerX, playerY+5) == ' ') {
        erasePlayer();
        playerY += 1;
        printPlayer();
    }
    if (getCharAtxy(playerX+3,playerY+5)=='$'||getCharAtxy(playerX+4,playerY+5)=='$'||getCharAtxy(playerX+5,playerY+5)=='$') {
        incrementScorePill();
        reSpawnPill();
    }
}
void movePlayerRight() {
    if (playerX < 52 && getCharAtxy(playerX+13, playerY+2) != '<') {
        erasePlayer();
        playerX += 1;
        printPlayer();
    }
    if (getCharAtxy(playerX+13,playerY)=='$'||getCharAtxy(playerX+13,playerY+1 )=='$'||getCharAtxy(playerX+13,playerY+2 )=='$'||getCharAtxy(playerX+13,playerY+3)=='$'||getCharAtxy(playerX+13,playerY+4)=='$') {
        incrementScorePill();
        reSpawnPill();
    }
}
void movePlayerLeft() {
    if (getCharAtxy(playerX-2, playerY) == ' ') {
        erasePlayer();
        playerX -= 1;
        printPlayer();
    }
    if (getCharAtxy(playerX-1,playerY)=='$'||getCharAtxy(playerX-1,playerY+1)=='$'||getCharAtxy(playerX+-1,playerY+2)=='$'||getCharAtxy(playerX-1,playerY+3)=='$'||getCharAtxy(playerX-1,playerY+4)=='$') {
        incrementScorePill();
        reSpawnPill();
    }
}
void checkPlayerCollision() {
    if ((getCharAtxy(playerX+13, playerY+2) == '<' && playerY+2 == enemy3Y+1) && displayEnemy3) {
        lives = 0;
    }
}

void shootBullet() {

    playerBullet = playerX + 14;

    while (getCharAtxy(playerBullet, playerY+2) != '#')
    {
        erasePlayerBullet();
        printPlayerBullet();
        Sleep(0.375);
        
        playerBullet += 1;

        if (playerY+2 == enemy3Y+1)
        {
            if(displayEnemy3) {
                incrementScoreEnemy();
            }
            displayEnemy3 = false;
        }
        else if ((enemy1Y == playerY+2 || enemy1Y+1 == playerY+2 || enemy1Y+2 == playerY+2))
        {
            if(displayEnemy1) {
                incrementScoreEnemy();
            }
            displayEnemy1 = false;
        }
        else if ((enemy2Y == playerY+2 || enemy2Y+1 == playerY+2 || enemy2Y+2 == playerY+2))
        {
            if(displayEnemy2) {
                incrementScoreEnemy();
            }
            displayEnemy2 = false;
        }
    }
}

void printPlayerBullet() {
    gotoxy(playerBullet,playerY+2);
    cout << "+";
}
void erasePlayerBullet() {
    gotoxy(playerBullet-1,playerY+2);
    cout << "  ";
    gotoxy(playerBullet-2,playerY+2);
    cout << "  ";
}

void enemy1Shoot() {
    enemy1Bullet = enemy1X - 3;

    while(getCharAtxy(enemy1Bullet-1, enemy1Y+1) != '#')
    {
        eraseEnemy1Bullet();
        printEnemy1Bullet();
        Sleep(1.5);

        enemy1Bullet -= 1;
        if (getCharAtxy(enemy1Bullet-1,playerY+2) == '>') {
            decrementPlayerLives();
            eraseEnemy1Bullet();
            break;
        }
    }
}
void printEnemy1Bullet() {
    gotoxy(enemy1Bullet-1,enemy1Y+1);
    cout << "+";
}
void eraseEnemy1Bullet() {
    gotoxy(enemy1Bullet,enemy1Y+1);
    cout << "  ";
    gotoxy(enemy1Bullet+1,enemy1Y+1);
    cout << "  ";
}

void enemy2Shoot() {
    enemy2Bullet = enemy2X - 3;

    while(getCharAtxy(enemy2Bullet-1, enemy2Y+1) != '#')
    {
        eraseEnemy2Bullet();
        printEnemy2Bullet();
        Sleep(1.5);

        enemy2Bullet -= 1;
        
        if (getCharAtxy(enemy2Bullet-1, enemy2Y+1) == '>') {
            decrementPlayerLives();
            eraseEnemy2Bullet();
            break;
        }
    }
}
void printEnemy2Bullet() {
    gotoxy(enemy2Bullet-1,enemy2Y+1);
    cout << "+";
}
void eraseEnemy2Bullet() {
    gotoxy(enemy2Bullet,enemy2Y+1);
    cout << "  ";
    gotoxy(enemy2Bullet+1,enemy2Y+1);
    cout << "  ";
}
// void generateEnemy1Bullet() {

//     enemy1BulletX[enemy1BulletCount] = enemy1X-3;
//     enemy1BulletY[enemy1BulletCount] = enemy1Y-1;
//     isEnemy1BulletActive[enemy1BulletCount] = true;
//     printEnemy1Bullet(enemy1BulletX[enemy1BulletCount], enemy1BulletY[enemy1BulletCount]);
//     enemy1BulletCount += 1;
// }
// void moveEnemy1Bullet() {
//     for (int i=0 ; i < enemy1BulletCount; i++) {
//         if (isEnemy1BulletActive[i] == true) {
//             if (getCharAtxy(enemy1BulletX[i]-1, enemy1BulletY[i]) == ' ') {

//                 eraseEnemy1Bullet(enemy1BulletX[i], enemy1BulletY[i]);
//                 enemy1BulletX[i] -= 1;
//                 printEnemy1Bullet(enemy1BulletX[i], enemy1BulletY[i]);
//             }
//             else if (getCharAtxy(enemy1BulletX[i]-1, enemy1BulletY[i]) != ' ') {
//                 eraseEnemy1Bullet(enemy1BulletX[i], enemy1BulletY[i]);
//                 makeEnemy1BulletInactive(i);
//             }
//         }
//     }
// }
// void printEnemy1Bullet(int x, int y) {
//     gotoxy(x, y);
//     cout << "+";
// }
// void eraseEnemy1Bullet(int x, int y) {
//     gotoxy(x, y);
//     cout << " ";
// }
// void makeEnemy1BulletInactive(int i) {
//     isEnemy1BulletActive[i] = false;
// }
void gotoxy(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y) {
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void printLogo() {
    gotoxy(10, 3);
    cout << "====================================================================================================================================" <<endl;
    gotoxy(17, 4);
    cout<<"  _____                                     _         ___                _       __                               _"<<endl;
    gotoxy(17, 5);
    cout<<"  \\_   \\_ __ ___  _ __     /\\/\\   __ _ _ __( ) __    / _ \\_ __ ___  __ _| |_    /__\\ ___  ___  ___ _   _  ___    / \\"<<endl;
    gotoxy(17, 6);
    cout<<"   / /\\/ '__/ _ \\| '_ \\   /    \\ / _` | '_ \\// __|  / /_\\/ '__/ _ \\/ _` | __|  / \\/// _ \\/ __|/ __| | | |/ _ \\  /  /"<<endl;
    gotoxy(17, 7);
    cout<<"/\\/ /_ | | | (_) | | | | / /\\/\\ \\ (_| | | | \\\\__ \\ / /_\\|| | |  __/ (_| | |_  / _  \\  __/\\__ \\ (__| |_| |  __/ /\\_/ "<<endl;
    gotoxy(17, 8);
    cout<<"\\____/ |_|  \\___/|_| |_| \\/    \\/\\__,_|_| |_||___/ \\____/|_|  \\___|\\__,_|\\__| \\/ \\_/\\___||___/\\___|\\__,_|\\___| \\/   "<<endl;
    gotoxy(10, 10);
    cout << "====================================================================================================================================" <<endl;
}

void startScreen() {
    printLogo();
    gotoxy(5, 12);
    cout << "   _____                              _          " <<endl;
    gotoxy(5, 13);
    cout << "  / ___/__  ______  ____  ____  _____(_)____  _ " <<endl;
    gotoxy(5, 14);
    cout << "  \\__ \\/ / / / __ \\/ __ \\/ __ \\/ ___/ / ___/ (_)" <<endl;
    gotoxy(5, 15);
    cout << " ___/ / /_/ / / / / /_/ / /_/ (__  ) /__  )  _   " <<endl;
    gotoxy(5, 16);
    cout << "/____/\\__, /_/ /_/\\____/ .___/____/_/____/  (_)  " <<endl;
    gotoxy(5, 17);

    cout << "     /____/           /_/                        " <<endl;
    gotoxy(53, 16);
    cout << "Iron Man's Great Rescue is an exciting 2D side-scrolling Adventure game where" <<endl;
    gotoxy(53, 17);
    cout << "the Avengers face their biggest threat yet. ULTRON has kidnapped the Avengers" <<endl;
    gotoxy(53, 18);
    cout << "and has been holding them hostage at his impenetrable base.   Engage in an exciting journey where it's up to" <<endl;
    gotoxy(53, 19);
    cout << "IRON-MAN to rescue his fellow heroes and save the World! Armed with Repulsor Beams and Rocket-powered flight " <<endl;
    gotoxy(53, 20);
    cout << ", navigate collapsing cities, underground lairs, and robotic ambushes! Collect energy cores to increase your" <<endl;
    gotoxy(53, 21);
    cout << "Score.  Face deadly traps and lethal enemies as you race against time to defeat ULTRON and Restore Hope." <<endl;
    gotoxy(45, 24);
    cout <<"The Fate of the World Rests in your hands!";
    gotoxy(8, 27);
    cout << "Press Enter to Start...";
    cin.get();
    system("cls");
}

int selectDifficulty() {

    string choice;

    printLogo();
    gotoxy(10, 13);
    cout << "--Select Difficulty--:" <<endl;
    gotoxy(15, 15);
    cout << "1) Novice" <<endl;
    gotoxy(15, 16);
    cout << "2) Intermediate" <<endl;
    gotoxy(15, 17);
    cout << "3) Veteran" <<endl;
    gotoxy(15, 18);
    cout << "4) Impossible" <<endl;
    gotoxy(10, 20);
    cout << "Choose your Desired Difficulty: ";
    cin >> choice;

    if (choice=="1" || choice=="2" || choice=="3" || choice=="4") {
        system("cls");
        return stoi(choice);
    }
    else  {
        cout << "Invalid Option!" << endl;
        while(choice!="1" || choice!="2" || choice!="3" || choice!="4")
        {
            cout << "Choose a Valid Difficulty: ";
            cin >> choice;
            cout << endl;
            if (choice=="1" || choice=="2" || choice=="3" || choice=="4")
            {
                system("cls");
                return stoi(choice);
                break;
            }
        }
    }
}

void countDown() {
    gotoxy(60, 9);
    cout << "  #####  " <<endl;
    gotoxy(60, 10);
    cout << " #     # " <<endl;
    gotoxy(60, 11);
    cout << "       # " <<endl;
    gotoxy(60, 12);
    cout << "  #####  " <<endl;
    gotoxy(60, 13);
    cout << "       # " <<endl;
    gotoxy(60, 14);
    cout << "       # " <<endl;
    gotoxy(60, 15);
    cout << " ###### " <<endl;
    Sleep(750);
    system("cls");
    gotoxy(60, 9);
    cout << "  #####  " <<endl;
    gotoxy(60, 10);
    cout << " #     # " <<endl;
    gotoxy(60, 11);
    cout << "       # " <<endl;
    gotoxy(60, 12);
    cout << "  #####  " <<endl;
    gotoxy(60, 13);
    cout << " #       " <<endl;
    gotoxy(60, 14);
    cout << " #       " <<endl;
    gotoxy(60, 15);
    cout << " ###### " <<endl;
    Sleep(750);
    system("cls");
    gotoxy(60, 9);
    cout << "   ##   " <<endl;
    gotoxy(60, 10);
    cout << " ####   " <<endl;
    gotoxy(60, 11);
    cout << "   ##   " <<endl;
    gotoxy(60, 12);
    cout << "   ##   " <<endl;
    gotoxy(60, 13);
    cout << "   ##   " <<endl;
    gotoxy(60, 14);
    cout << "   ##   " <<endl;
    gotoxy(60, 15);
    cout << " ###### " <<endl;
    Sleep(750);
    system("cls");
    for (int i=0 ; i<3 ; i++) {
        system("cls");
        gotoxy(38+i*3, 9+i*2);
        cout << "     _____   ________  ____       _____    ________   _ " <<endl;
        gotoxy(38+i*3, 10+i*2);
        cout << "    //   )) /__  ___/ // | |     //   ) ) /__  ___/  // " <<endl;
        gotoxy(38+i*3, 11+i*2);
        cout << "   ((         / /    //__| |    //___/ /    / /     // " <<endl;
        gotoxy(38+i*3, 12+i*2);
        cout << "     \\\\      / /    / ___  |   / ___ (     / /     // " <<endl;
        gotoxy(38+i*3, 13+i*2);
        cout << "       ))   / /    //    | |  //   | |    / /     _  " <<endl;
        gotoxy(38+i*3, 14+i*2);
        cout << "((___ //   /_/    //     |_| //    |_|   /_/     // " <<endl;
        if (i != 2) {
            Sleep(150);
        }
    }
    Sleep(1000);
    system("cls");
}

void winMessage() {
    gotoxy(100, 14);
    cout << "Stage Cleared !" <<endl;
    Sleep(750);
    gotoxy(100, 15);
    cout << "Press Enter to Continue..." <<endl;
    cin.ignore();
    cin.get();
}

void winningScreen() {
    system("cls");
    gotoxy(22, 4);
    cout<<" _____                             _         _       _   _                   _   _"       <<endl;
    gotoxy(22, 5);
    cout << "/  __ \\                           | |       | |     | | (_)                 | | | |"    <<endl;
    gotoxy(22, 6);
    cout << "| /  \\/ ___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_ _  ___  _ __  ___  | | | |"    <<endl;
    gotoxy(22, 7);
    cout << "| |    / _ \\| '_ \\ / _` | '__/ _` | __| | | | |/ _` | __| |/ _ \\| '_ \\/ __| | | | |" <<endl;
    gotoxy(22, 8);
    cout << "| \\__/\\ (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \\__ \\ |_| |_|" <<endl;
    gotoxy(22, 9);
    cout << " \\____/\\___/|_| |_|\\__, |_|  \\__,_|\\__|\\__,_|_|\\__,_|\\__|_|\\___/|_| |_|___/ (_) (_)" <<endl;
    gotoxy(22, 10);
    cout << "                    __/ |                       _         _     "     <<endl;
    gotoxy(22, 11);
    cout << "                   |___/                       (_)       | |     "     <<endl;
    gotoxy(40, 12);
    cout << " _   _  ___  _   _  __      ___ _ __   | |" <<endl;
    gotoxy(40, 13);
    cout << "| | | |/ _ \\| | | | \\ \\ /\\ / / | '_ \\  | |" <<endl;
    gotoxy(40, 14);
    cout << "| |_| | (_) | |_| |  \\ V  V /| | | | | |_|" <<endl;
    gotoxy(40, 15);
    cout << " \\__, |\\___/ \\__,_|   \\_/\\_/ |_|_| |_| (_)" <<endl;
    gotoxy(40, 16);
    cout << "  __/ |                                   " <<endl;
    gotoxy(40, 17);
    cout << " |___/                                    " <<endl;
    gotoxy(38, 19);
    cout << "--THE WORLD HAS TO LIVE IN FEAR NO MORE !!--" <<endl;
    gotoxy(0, 23);
}

void failMessage() {
    gotoxy(100, 14);
    cout << "You Died !" <<endl;
    Sleep(750);
    gotoxy(100, 15);
    cout << "Press Enter to Continue..." <<endl;
    cin.ignore();
    cin.get();
}

void failedScreen() {
    system("cls");
    gotoxy(30, 4);
    cout<<" _____   ___  ___  ___ _____    _____  _   _ ___________   _   _ "       <<endl;
    gotoxy(30, 5);
    cout << "|  __ \\ / _ \\ |  \\/  ||  ___|  |  _  || | | |  ___| ___ \\ | | | |"    <<endl;
    gotoxy(30, 6);
    cout << "| |  \\// /_\\ \\| .  . || |__    | | | || | | | |__ | |_/ / | | | |"    <<endl;
    gotoxy(30, 7);
    cout << "| | __ |  _  || |\\/| ||  __|   | | | || | | |  __||    /  | | | |" <<endl;
    gotoxy(30, 8);
    cout << "| |_\\ \\| | | || |  | || |___   \\ \\_/ /\\ \\_/ / |___| |\\ \\  |_| |_|" <<endl;
    gotoxy(30, 9);
    cout << " \\____/\\_| |_/\\_|  |_/\\____/    \\___/  \\___/\\____/\\_| \\_| (_) (_)" <<endl;
    gotoxy(30, 10);
    cout << "                                                                 "     <<endl;
    gotoxy(40, 11);
    cout << "__   __             _                      _ "     <<endl;
    gotoxy(40, 12);
    cout << "\\ \\ / /            | |                    | |" <<endl;
    gotoxy(40, 13);
    cout << " \\ V /___  _   _   | |     ___  ___  ___  | |" <<endl;
    gotoxy(40, 14);
    cout << "  \\ // _ \\| | | |  | |    / _ \\/ __|/ _ \\ | |" <<endl;
    gotoxy(40, 15);
    cout << "  | | (_) | |_| |  | |___| (_) \\__ \\  __/ |_|" <<endl;
    gotoxy(40, 16);
    cout << "  \\_/\\___/ \\__,_|  \\_____/\\___/|___/\\___| (_)" <<endl;
    gotoxy(38, 19);
    cout << "--THE WORLD HAS FALLEN TO THE MIGHT OF ULTRON !!--" <<endl;
    gotoxy(0, 23);
}

bool restartGame() {

    enemy1X = 75, enemy1Y = 4;
    enemy2X = 64, enemy2Y = 17;
    enemy3X = 5, enemy3Y = 2;
    playerX = 5, playerY = 14;
    pillX = random(15, 45), pillY = random(5, 21);
    score = 0, lives = 3;
    playerBullet = 0;
    enemy1Bullet = 0;
    enemy2Bullet = 0;
    enemy3Bullet = 0;

    enemy1BulletX[100], enemy1BulletY[100];
    isEnemy1BulletActive[100];
    enemy1BulletCount = 0;

    goDown1 = true;
    goDown2 = true;
    goLeft = true;
    displayEnemy1 = true;
    showKill1 = true;
    displayEnemy2 = true;
    showKill2 = true;
    displayEnemy3 = true;
    showKill3 = true;

    string option;

        cout << "Would You like to Play Again ? (Yes/No): ";
        getline(cin, option);

        while((option != "Yes"||"yes") || (option != "No"||"no"))
        {
            cout << "Would You like to Play Again ? (Yes/No): ";
            getline(cin, option);
            cout << endl;
            if ((option == "Yes"||"yes") || (option == "No"||"no"))
            {
                break;
            }
        }
        if(option == "Yes"||"yes") {
            return true;
        }
        else if (option == "No"||"no") {
            return false;
        }
    return false;
}

void printMaze() {
    cout << "#############################################################################################" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                           $                             ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                          $                                                              ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "##                                                                                         ##" <<endl;
    cout << "#############################################################################################" <<endl;
}