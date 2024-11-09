#include <iostream>
using namespace std;

main() {
    system("cls");

    string fruit;
    int weight;
    bool fruitfound = false;
    cout << "Please enter the name of a fruit: ";
    cin >> fruit;
    cout << "Please enter the quantity (kgs): ";
    cin >> weight;

    string fruits[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};

    for (int i=0 ; i<4 ; i++)
    {
        if (fruit == fruits[i])
        {
            cout << "Total Price is : Rs."<<weight*price[i]<<endl;
            fruitfound = true;
        }
    }
    if (!fruitfound)
    {
        cout << "We're Sorry! This fruit could not be found.";
    }

}