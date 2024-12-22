#include <iostream>
using namespace std;


bool isWinner(int, string[][3], string);
bool checkRows(int, string[][3], string);
bool checkColumns(int, string[][3], string);
bool checkDiagonals(int, string[][3], string);

main()
{
    system("cls");

    int gridSize;
    cout << "Seclect Grid Size: ";
    cin >> gridSize;

    string grid[gridSize][gridSize];

    for (int i=0 ; i<gridSize ; i++)
    {
        for (int j=0 ; j<gridSize ; j++)
        {
            grid[i][j] = "N";
        }
    }

    string symbol1, symbol2;
    int count = 0;

    cout << "Player 1: Enter your Symbol (X\\O): ";
    cin >> symbol1;
    cout << "Player 2: Enter your Symbol (X\\O): ";
    cin >> symbol2;

    cout << endl;

    while (count != gridSize*gridSize)
    {

        for (int i=0 ; i<gridSize ; i++)
        {
            for (int j=0 ; j<gridSize ; j++)
            {
                cout << grid[i][j] <<"\t|\t";
            }
        cout << endl;
        }
        cout << endl;

        int row, column;

        cout << "Player 1: Play your Turn:" << endl;
        cout << "Enter Row: ";
        cin >> row;
        cout << "Enter Column: ";
        cin >> column;
        grid[row-1][column-1] = symbol1;
        cout << endl;

        if(isWinner(gridSize, grid, symbol1))
        {
            cout << "Player 1 Wins !!";
            break;
        }

        for (int i=0 ; i<gridSize ; i++)
        {
            for (int j=0 ; j<gridSize ; j++)
            {
                cout << grid[i][j] <<"\t|\t";
            }
        cout << endl;
        }

        cout << endl;

        cout << "Player 2: Play your Turn:" << endl;
        cout << "Enter Row: ";
        cin >> row;
        cout << "Enter Column: ";
        cin >> column;
        grid[row-1][column-1] = symbol2;
        cout << endl;

        count += 1;

        if(isWinner(gridSize, grid, symbol2))
        {
            cout << "Player 2 Wins !!";
            break;
        }
    }
}

bool checkRows(int gridSize, string grid[][3], string symbol)
{
    int count = 0;

    for (int i=0 ; i<gridSize ; i++)
    {
        count = 0;
        for (int j=0 ; j<gridSize ; j++)
        {
            if (grid[i][j] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == gridSize)
        {
            return true;
        }
    }
    return false;
}

bool checkColumns(int gridSize, string grid[][3], string symbol)
{
    int count = 0;

    for (int j=0 ; j<gridSize ; j++)
    {
        count = 0;
        for (int i=0 ; i<gridSize ; i++)
        {
            if (grid[i][j] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == gridSize)
        {
            return true;
        }
    }
    return false;
}

bool checkDiagonals(int gridSize, string grid[][3], string symbol)
{
    int count = 0;
    for (int i=0 ; i<gridSize ; i++)
    {
        if (grid[i][i] == symbol)
        {
            count = count + 1;
        }
    }
    if (count == gridSize)
    {
        return true;
    }
    count = 0;
    for (int i=0 , j=2 ; i<gridSize ; i++ , j--)
    {
        if (grid[i][j] == symbol)
        {
            count = count + 1;
        }
    }
    if (count == gridSize)
    {
        return true;
    }
    return false;
}

bool isWinner(int gridSize, string grid[][3], string symbol)
{
    if (checkRows(gridSize, grid, symbol) || checkColumns(gridSize, grid, symbol) || checkDiagonals(gridSize, grid, symbol))
    {
        return true;
    }
    else
    {
        return false;
    }
}