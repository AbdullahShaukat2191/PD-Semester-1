#include <iostream>
using namespace std;
main ()
{
    system("cls");

    string word;
    cout << "Enter any Word: ";
    cin >> word;

    for(int i=word.length() ; i<word.length()+1 ; i--)
    {
        cout<<word[i];
    }
}