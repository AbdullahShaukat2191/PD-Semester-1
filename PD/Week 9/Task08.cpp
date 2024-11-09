#include <iostream>
using namespace std;
main()
{
    system("cls");

    int n;
    cout << "How many Colours are the Strip: ";
    cin >> n;

    int time = n*2;
    int count = 0;

    string color[n];

    for (int i=0 ; i<n ; i++)
    {
        cout << "Enter colour "<<i+1<<": ";
        cin >> color[i];
    }

    for (int i=0 ; i<n ; i++)
    {
        if (color[i+1] != "\o")
        {
            if (color[i] == color[i+1])
            {
                continue;
            }

            else
            {
                count = count + 1;
                for (int j=0 ; j<n-i ; j++)
                {
                    time = time + count;
                }
            }
        }
    }
    cout << time;
}