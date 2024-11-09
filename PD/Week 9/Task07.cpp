#include <iostream>
using namespace std;
main()
{
    system("cls");

    string word1, word2;
    int count = 0;

    cout << "Enter the First Word: ";
    cin >> word1;
    cout << "Enter the Second Word: ";
    cin >> word2;

    for (int i=0 ; i<word1.length() ; i++)
    {
        for (int j=0 ; j<word2.length() ; j++)
        {
            if (word1[i] == word2[j])
            {
                count = count + 1;
                break;
            }
        }
    }
    cout << count;
}