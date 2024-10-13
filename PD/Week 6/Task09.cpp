#include <iostream>
using namespace std;

string check(int, int, int);

main() {
    system("cls");

    int height, x_cord, y_cord;
    string result;

    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter x coordinate: ";
    cin >> x_cord;
    cout << "Enter y coordinate: ";
    cin >> y_cord;
    result = check(height, x_cord, y_cord);
    cout << "The Point lies: " << result;
}

string check(int h, int x, int y)
{
    string result;

    if ( y >= 0 && y <= (h*4) )
    {
        if ( x >= 0 && x <= (h*2) )
        {
            if ( y==0 || y==(h*4) )
            {
                return result = "Border";
            }
            else if ( x==0 || x==(h*2))
            {
                return result = "Border";
            }
            else if ( y == 2 && (x >= 0 && x <= (h*2)))
            {
                return result = "Border";
            }
            else if ( x == h && (y >= 0 && y <= (h*4)))
            {
                return result = "Border";
            }
        else
        {
            return result = "Inside";
        }
        }
    }
    else
    {
        return result = "Outside";
    }
}