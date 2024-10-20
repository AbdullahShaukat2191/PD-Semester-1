#include <iostream>
using namespace std;

main() {
    system("cls");

    int num;
    cout << "Enter the number to amplify: ";
    cin >> num;

    for (int i=1; i<=num ; i++)
    {
        if (i%4 == 0)
        {
            int j = i;
            j = j*10;
            cout << j;
        }
        if (i%4 == 0)
        {
            continue;
        }
        cout << " " << i << " ";
    }
}