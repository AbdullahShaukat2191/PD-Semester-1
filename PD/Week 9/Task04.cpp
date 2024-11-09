#include <iostream>
using namespace std;
main()
{
    system("cls");
    int n;
    bool found7 = false;

    cout << "How many Numbers do you want to enter: ";
    cin >> n;

    int numbers[n];

    for (int i=0 ; i<n ; i++)
    {
        cout << "Enter value "<<i+1<<" of the array: ";
        cin >> numbers[i];
    }

    for (int i=0 ; i<n ; i++)
    {
        if (numbers[i] == 7)
        {
            cout << "BOOM!!!";
            found7 = true;
        }
    }

    if (!found7)
    {
        cout << "Sorry, Wecouldn't Find 7 in the given numbers.";
    }
}