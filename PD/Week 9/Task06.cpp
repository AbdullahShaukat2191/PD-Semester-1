#include <iostream>
using namespace std;
main()
{
    system("cls");

    int tranform;

    int number[3];

    for (int i=0 ; i<3 ; i++)
    {
        cout << "Enter Element "<<i+1<<" of array: ";
        cin >> number[i];
    }
    cout << "Enter the number of times even-odd tranformation needs to be done: ";
    cin >> tranform;
    int n = tranform;

    for (int i=0 ; i<3 ; i++)
    {
        if (number[i]%2 == 0)
        {
            cout << number[i]-2*n <<" ";
        }
        else if (number[i]%2 != 0)
        {
            cout << number[i]+2*n <<" ";
        }
    }
}