#include <iostream>
using namespace std;

double amount(string, string, int);

main() {
    system("cls");

    string fruit_name, week_day;
    int quantity;
    double result;

    cout << "Enter the Fruit: ";
    cin >> fruit_name;
    cout << "Enter the day of Week (Monday, Tuesday, e.g): ";
    cin >> week_day;
    cout << "Enter the Quantity: ";
    cin >> quantity;
    result = amount(fruit_name, week_day, quantity);
    cout << "Total Price is: " << result;
}

double amount(string name, string day, int quan) 
{
    double price;

    if ( day=="monday" || day=="tuesday" || day=="wednesday"|| day=="thursday"|| day=="friday")
    {
        if (name == "banana") {
            return price = quan * 2.50;
        }
        else if (name == "apple") {
            return price = quan * 1.20;
        }
        else if (name == "orange") {
            return price = quan * 0.85;
        }
        else if (name == "grapefruit") {
            return price = quan * 1.45;
        }
        else if (name == "kiwi") {
            return price = quan * 2.70;
        }
        else if (name == "pineapple") {
            return price = quan * 5.50;
        }
        else if (name == "banana") {
            return price = quan * 3.85;     
        }
    }
    else if ( day=="saturday" || day=="sunday")
    {
        if (name == "banana") {
            return price = quan * 2.70;
        }
        else if (name == "apple") {
            return price = quan * 1.25;
        }
        else if (name == "orange") {
            return price = quan * 0.90;
        }
        else if (name == "grapefruit") {
            return price = quan * 1.60;
        }
        else if (name == "kiwi") {
            return price = quan * 3.00;
        }
        else if (name == "pineapple") {
            return price = quan * 5.60;
        }
        else if (name == "banana") {
            return price = quan * 4.20;     
        }
    }
    else
    {
        cout << "Error" << endl;
    }
}