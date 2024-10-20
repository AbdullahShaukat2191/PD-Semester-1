#include <iostream>
using namespace std;

main() {
    system("cls");
       
    int days_visited, patients, daily_treated; 
    int initial_doctors = 7;
    int treated, untreated;
    int current_doctors = initial_doctors;

    cout << "Enter the Number of Days you visited the Hospital: ";
    cin >> days_visited;

    for (int i=1; i<=days_visited; i++) 
    {
        cout << "Number of patients on Day " << i << ": ";
        cin >> patients;
        
        if ( patients > current_doctors)
        {
            daily_treated = current_doctors;
        }
        else 
        {
            daily_treated = patients;
        }

        if ((i % 3 == 0) && (treated < untreated)) 
        {
            current_doctors++ ;
            daily_treated++ ;
        }

        treated = treated + daily_treated;
        untreated = untreated + (patients - daily_treated);
    }

    cout << "Total Treated Patients are: " << treated << endl;
    cout << "Total Untreated Patients are: " << untreated << endl;
}
