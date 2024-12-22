#include <iostream>
using namespace std;

main() {
    system("cls");

    int array[5][6] = {{5,2,-4,6,-3,1},
                       {5,2,-4,6,-3,1},
                       {5,2,-4,6,-3,1},
                       {5,2,-4,6,-3,1},
                       {5,2,-4,6,-3,1}};

    for (int i=0 ; i<5 ; i++)
    {
        for (int j=i ; j==i ; j++)
        {
            int sum = array[i][j] + array[i][j+1];
            cout <<"Sum = "<<sum << endl;
        }
    }
    cout << endl;
}