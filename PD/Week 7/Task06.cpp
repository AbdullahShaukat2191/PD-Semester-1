#include <iostream>
using namespace std;

string isPrime(int);

main() {
    system("cls");

    int num;
    cout << "Enter the Number: ";
    cin >> num;

    cout << isPrime(num);
}

string isPrime(int x)
{
    string result = "False";

    for (int i=1; i>0 ; i++)
    {
        if (i == 1 || i == x)
        {
            continue;
        }
        if (x%i == 0)
        {
            return result = "False";
        }
        else
        {
            return result = "True";
        }
    }
}