#include <iostream>
using namespace std;

void header();
int menu();

main() {
    system("cls");

    int action;
    header();
    action = menu();
    if (action == 1)
    {
        cout << "You have Entered Option 1";
    }
    if (action == 2)
    {
        cout << "You have Entered Option 2";
    }
    if (action == 3)
    {
        cout << "You have Entered Option 3";
    }
}


int user_menu() {
    int option;

    cout << "Welcome Sir/Ma'am , " << endl;
    cout << "What Are You Looking to Do ?  " << endl;
    cout << "1. Search inside Catalogues   " << endl;
    cout << "2. Check your Cart            " << endl;
    cout << "3. Go to Checkout             " << endl;
    cout << "Select your Option: ";
    cin >> option;
    return option;
}
bool login() {
    string password;
    cout << "Enter your Password";
    cin >> password;
    if (password == "admin2191") {
        admin_menu();
    }
    else if (password == "user2191") {
        user_menu();
    }
    else {
        cout << "Enter a Valid Password!";
    }

}

void header()
{
cout << "              *******************************************************************************************************" << endl;
cout << "              *******************************************************************************************************" << endl;
cout << "              *******************************************************************************************************" << endl;
cout << "              ***       _      _  ____  ____ _______  _____                                                       ***" << endl;
cout << "              ***       |      | |     |          /  /     \\           KID'S STORE .....BY.......                 ***" << endl;
cout << "              ***       |      | |___  |___      /  |       |                                                     ***" << endl;
cout << "              ***        \\    /  |     |       /    |       |                                                     ***" << endl;
cout << "              ***         \\__/   |____ |____  /_____ \\_____/                                                      ***" << endl;
cout << "           ******                                     _      _  ____   ___   ___     __             _____         ***" << endl;
cout << "*****************                                     |      | |      |   \\ |   \\   /  \\    |         |           ***" << endl;
cout << "           ******                                     |      | |___   |___/ |___/  /____\\   |         |           ***" << endl;
cout << "              ***                                      \\    /  |      |  \\  |     |      |  |         |           ***" << endl;
cout << "              ***                                       \\__/   |____  |   \\ |    _|_    _|_ |_____  __|__         ***" << endl;
cout << "              ***                                                                                                 ***" << endl;
cout << "              *******************************************************************************************************" << endl;
cout << "              *******************************************************************************************************" << endl;
cout << "              *******************************************************************************************************" << endl;
cout << endl << endl;
}