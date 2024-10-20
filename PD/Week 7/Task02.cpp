#include <iostream>
using namespace std;

main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j > i;  j--)
        {
            cout << "*";
        }
    cout << endl;
    }
}