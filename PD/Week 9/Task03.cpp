#include <iostream>
using namespace std;
main()
{
    system("cls");
    string word;
    cout << "Enter any Word: ";
    cin >> word;

    cout << "The Word \""<<word<<"\" has "<<word.length()<<" characters."<<endl;

    if(word.length()%2 == 0)
    {
        cout << "Even";
    }
    else if (word.length()%2 != 0)
    {
        cout << "Odd";
    }
}