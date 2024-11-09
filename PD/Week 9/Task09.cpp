#include <iostream>
using namespace std;
main ()
{
    system("cls");

    string moves[10] = {"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Aeabesque"};

    int pin, j;
    cout << "Enter your PIN (4-digits): ";
    cin >> pin;

    for (int i=0 ; i<4 ; i++)
    {
        j = pin % 10;
        if ( j>=0 && j<=9 )
        {
            continue;
        }
        else
        {
            cout << "Invalid Output";
        }
    }

    for (int i=0 ; i<4 ; i++)
    {
        int n = pin % 10;
        cout << "\""<<moves[(n+i)%10]<<"\",";
        pin = pin / 10;
    }
}