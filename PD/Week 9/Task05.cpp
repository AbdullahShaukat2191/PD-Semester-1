#include <iostream>
using namespace std;
main()
{
    string character[4];
    int count = 0;

    for (int i=0 ; i<4 ; i++)
    {
        cout << "Enter element "<<i+1<<" of the array: ";
        cin >> character[i];
    }
    
    for (int i=0 ; i<4 ; i++)
    {
        if (character[i] == character[1])
        {
            count = count + 1;
        }
    }
}