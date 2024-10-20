#include <iostream>
using namespace std;

main() {
    system("cls");

    int num, sum;
    cout << "Enter the Tri-angle number: ";
    cin >> num;
    sum = 0;

    for (int i=1; i<=num ; i++)
    {
        sum = sum + i;
    }
        cout << "Dots in Tri-angle: "<<sum;

}