#include <iostream>
using namespace std;

void upper(int);
void lower(int);

main() {
    system("cls");

    int rows;
    cout << "Enter the number of Rows: ";
    cin >> rows;

    upper(rows);
    lower(rows);
}

void upper(int x)
{
    int rows = x;

    for (int i=1; i<=rows ; i++)
    {
        for (int k=rows-i; k>=0; k --)
        {
            cout << " ";
        }
        for (int j=1; j<=i; j++)
        {
            cout << "*";
        }
    cout << endl;
    }
}

void lower(int x)
{
    int rows = x;

    for (int i=0; i<rows ; i++)
    {
        for (int k=-1; k<=i; k++ )
        {
            cout << " ";
        }
        for (int j=rows-1; j>i; j--)
        {
            cout << "*";
        }
    cout << endl;
    }

}
