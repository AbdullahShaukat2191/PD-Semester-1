#include <iostream>
using namespace std;

double appartment(string, int);
double studio(string, int);

main() {
    system("cls");

    string month;
    int stay;
    double result1, result2;

    cout << "Enter the Month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the Number of Stays: ";
    cin >> stay;
    result1 = appartment(month, stay);
    result2 = studio(month, stay);
    cout << "Price for Whole Stay at Apartment is: $" << result1 << endl;
    cout << "Price for Whole Stay at Studio is: $" << result2 << endl;
}

double appartment(string month_name, int stays)
{
    double amount;

    if ( month_name=="May" || month_name=="October")
    {
        amount = stays * 65;
        if (stays > 14)
        {
            return amount = amount - (amount*10)/100;
        }
        else
        {
            return amount;
        }
    }
    if ( month_name=="June" || month_name=="September")
    {
        amount = stays * 68.70;
        if (stays > 14)
        {
            return amount = amount - (amount*10)/100;
        }
        else
        {
            return amount;
        }
    }
    if ( month_name=="July" || month_name=="August")
    {
        amount = stays * 77;
        if (stays > 14)
        {
            return amount = amount - (amount*10)/100;
        }
        else
        {
            return amount;
        }
    }
}

double studio(string month_name, int stays)
{
    double amount;

    if ( month_name=="May" || month_name=="October")
    {
        amount = stays * 50;
        if (stays > 7 && stays < 15)
        {
            return amount = amount - (amount*5)/100;
        }
        else if (stays > 14)
        {
            return amount = amount - (amount*30)/100;
        }
        else
        {
            return amount;
        }
    }
    else if ( month_name=="June" || month_name=="September")
    {
        amount = stays * 75.20;
        if (stays > 14)
        {
            return amount = amount - (amount*20)/100;
        }
        else
        {
            return amount;
        }
    }
    else if ( month_name=="July" || month_name=="August")
    {
        return amount = stays * 76;
    }
}