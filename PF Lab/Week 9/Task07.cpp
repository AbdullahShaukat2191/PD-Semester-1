#include <iostream>
using namespace std;
main ()
{
    system("cls");

    string word;
    cout << "Enter any word: ";
    cin >> word;

    for (int i=0 ; i<word.length() ; i++)
    {
        cout <<word[i]<<" is at location "<<i<<endl;
    }
}