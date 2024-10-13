#include <iostream>
using namespace std;

double bill(string, string, double);
string service(string);

main() 
{
    system("cls");

    string code, time, type;
    double minutes, result;

    cout << "Enter the service code (P/p for Premium | R/r for Regular): ";
    cin >> code;
    cout << "Enter time of call (D/d for Day | N/n for Night): ";
    cin >> time;
    cout << "Enter Duration of minutes used: ";
    cin >> minutes;
    type = service(code);
    cout << "Service Type: " << type << endl;
    cout << "Total Number of minutes used: " << minutes << " minutes" << endl;    
    result = bill(code, time, minutes);
    cout << "Amount Due: $" << result;
}

string service(string x)
{
    string s_type;

    if (x == "R"|| x == "r")
    {
        return s_type = "Regular";
    }
    else if (x == "P"|| x == "p")
    {
        return s_type = "Premium";
    }
}

double bill(string c, string t, double m)
{
    double amount;

    if ( c == "R"|| c == "r" && m <= 50 )
    {
        return amount = 10;
    }
    else if ( c == "R"|| c == "r" && m > 50 )
    {
        return amount = 10 + (m-50)*0.2;
    }


    else if ( c == "P"|| c == "p" && t == "D" || t == "d" && m <= 75 )
    {
        return amount = 25;
    }
    else if ( c == "P"|| c == "p" && t == "D" || t == "d" && m > 75 )
    {
        return amount = 25 + (m-75)*0.1;
    }
    else if ( c == "P"|| c == "p" && t == "N" || t == "n" && m <= 100 )
    {
        return amount = 25;
    }
    else if ( c == "P" || c == "p" && t == "N" || t == "n" && m > 100 )
    {
        return amount = 25 + (m-100)*0.05;
    }
}
