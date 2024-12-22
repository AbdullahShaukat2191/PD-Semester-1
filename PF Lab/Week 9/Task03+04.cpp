#include <iostream>
using namespace std;
main ()
{
    system("cls");

    int array[5];
    for (int i=0 ; i<5 ; i++)
    {
        cout << "Enter the "<<i+1<<" for the Array: ";
        cin >> array[i];
    }

    cout << "The First Number is: "<<array[0]<<endl;
    cout << "The Last Number is: "<<array[4]<<endl;
}