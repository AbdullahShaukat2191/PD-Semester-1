#include <iostream>
using namespace std;

int games(string, double, double);

main() {
    system("cls");

    string year;
    double holidays, weekends;
    int result;

    cout << "Enter the Type of Year (Normal/Leap): ";
    cin >> year;
    cout << "Enter the number of Holidays: ";
    cin >> holidays;
    cout << "Enter the number of Weekends: ";
    cin >> weekends;
    result << games(year, holidays, weekends);
    cout << "Vladimir has played "<<result<<" games";
}

int games(string year_type, double holi, double weekend_home)
{
    double days_played;

    double weekends= 48;

    double weekend_sofia = weekends-weekend_home;
    double sat_sofia = (weekend_sofia - (weekend_sofia/4))/2;
    sat_sofia = sat_sofia + (holi*2)/3;
    double sun_home = weekend_home/2;
    
    if (year_type == "leap")
    {
        days_played = sat_sofia + sun_home;
        return days_played = days_played + (days_played*15)/100;
    }

    return days_played = sat_sofia + sun_home;
}