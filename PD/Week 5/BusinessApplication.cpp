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


void header()
{
cout << "*************************************************************" << endl;
cout << "*************************************************************" << endl;
cout << "**                                                         **" << endl;
cout << "**            CHILDRENS'S GARMENTS ONLINE STORE            **" << endl;
cout << "**                                                         **" << endl;
cout << "*************************************************************" << endl;
cout << "*************************************************************" << endl;
cout << endl;
}

int menu()
{
int option;
cout << "What Are You Looking to Do ?  " << endl;
cout << "1. Search inside Catalogues   " << endl;
cout << "2. Check your Cart            " << endl;
cout << "3. Go to Checkout             " << endl;
cout << "Select your Option: ";
cin >> option;
return option;
}