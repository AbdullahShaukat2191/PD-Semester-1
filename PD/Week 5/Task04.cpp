#include <iostream>
using namespace std;
double project_time(double, double);
main() {
    system("cls");
    double hrs_needed, days, workers, hrs_worked, hrs_left;
    cout << "Enter the needed hours: ";
    cin >> hrs_needed;
    cout << "Enter the Days the firm has: ";
    cin >> days;
    days = days - days/100*10;
    cout << "Enter no. of workers: ";
    cin >> workers;
    hrs_worked = project_time(days , workers);
    hrs_left = hrs_worked - hrs_needed;
    if (hrs_left > 0) {
        cout << "Yes! " << hrs_left << " hours left." ;
    }
    else {
        cout << "Not enough time! " << -(hrs_left) << " hours needed" ;
    }
}

double project_time(double d, double w) {
    int result = d*10*w;
    return result;
}