#include <iostream>
using namespace std;
main()
{
    system("cls");

    string name;
    bool moviefound = false;

    cout << "Enter the Movie you want to watch: ";
    cin >> name;

    string movie[5] = {"avengers","thor","dr.strange","titanic","jumanji"};
    int price[5] = {500,500,500,500,500};

    for (int i=0 ; i<5 ; i++)
    {
        if ( (name == movie[i]) && (i%2 != 0))
        {
            cout << "Ticket Price: Rs"<<price[i]-price[i]*0.05;
            moviefound = true;
        }
        else if ( (name == movie[i]) && (i%2 == 0) )
        {
            cout << "Ticket Price: Rs."<<price[i]-price[i]*0.10;
            moviefound = true;
        }
    }
    if (!moviefound)
    {
        cout << "This Movie is not airing today.";
    }

}