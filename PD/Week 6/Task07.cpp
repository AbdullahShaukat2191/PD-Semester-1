#include <iostream>
using namespace std;

string status(int, int, int, int);
void time_arrival(int, int, int, int);

main() {
    system("cls");

    int start_hour, start_minute, arrive_hour, arrive_minute;
    string result;

    cout << "Enter the Exam Starting Time (Hour): ";
    cin >> start_hour;
    cout << "Enter the Exam Starting Time (Minute): ";
    cin >> start_minute;
    cout << "Enter Student's time of arrival (Hour): ";
    cin >> arrive_hour;
    cout << "Enter Student's time of arrival (Minute): ";
    cin >> arrive_minute;
    result = status(start_hour, start_minute, arrive_hour, arrive_minute);
    cout << result << endl;
    time_arrival(start_hour, start_minute, arrive_hour, arrive_minute);
}

string status(int st_h, int st_m, int a_h, int a_m)
{
    string result;

    if ( a_h < st_h )
    {
        result = "Early";
        if ( a_h < st_h && (60-a_m)+st_m <= 30 )
        {
            return result = "On Time";
        }
        else
        {
            return result;
        }
    }
    else if ( a_h > st_h)
    {
        return result = "Late";
    }
    else if ( a_h == st_h )
    {
        result = "On Time";
        if ( a_h == st_h && ((60-a_m)-(60-st_m) > 30 ))
        {
            return result = "Early";
        }
        else if ( a_h == st_h && a_m > st_m )
        {
            return result = "Late";
        }
        else
        {
            return result;
        }
    }
}

void time_arrival(int st_h, int st_m, int a_h, int a_m)
{
    int e_hour = st_h - a_h;
    int l_hour = a_h - st_h;

    if ( a_h < st_h)
    {
        cout << e_hour <<" hours before start";
    }
    else if ( a_h > st_h)
    {
        cout << l_hour <<" hours after start";
    }
}