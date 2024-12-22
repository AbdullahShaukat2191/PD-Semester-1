#include <iostream>
using namespace std;
main ()
{
    system("cls");

    int sum = 0;

    int array[5] = {1,2,3,4,5};
    for (int i=0 ; i<5 ; i++)
    {
        sum = sum + array[i];
    }

    cout << "The Sum of the first 5 Natural numbers is: "<<sum<<endl;
    int avg = sum/5;
    cout << "The Average of the First 5 Natural NUmbers is: "<<avg<<endl;
}