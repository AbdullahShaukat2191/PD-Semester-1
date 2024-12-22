#include <iostream>
using namespace std;
main ()
{
    system("cls");

    int n;
    cout << "Enter the Number of values you want in the array: ";
    cin >> n;

    int array[n];
    for (int i=0 ; i<n ; i++)
    {
        cout << "Enter the "<<i+1<<" for the Array: ";
        cin >> array[i];
    }

    cout << "The Entred Numbers are ";

    for (int i=0 ; i<n ; i++)
    {
        cout <<array[i]<< ",";
    }
}